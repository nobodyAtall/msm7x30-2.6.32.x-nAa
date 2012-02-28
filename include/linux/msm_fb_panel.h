#ifndef __ARCH_ARM_MACH_MSM_FB_PANEL_H
#define __ARCH_ARM_MACH_MSM_FB_PANEL_H

struct platform_device;

struct msm_fb_data_type;

typedef void (*msm_fb_vsync_handler_type) (void *arg);

/* panel type list */
#define NO_PANEL		0xffff	/* No Panel */
#define MDDI_PANEL		1	/* MDDI */
#define EBI2_PANEL		2	/* EBI2 */
#define LCDC_PANEL		3	/* internal LCDC type */
#define EXT_MDDI_PANEL		4	/* Ext.MDDI */
#define TV_PANEL		5	/* TV */
#define HDMI_PANEL		6	/* HDMI TV */
#define DTV_PANEL		7	/* DTV */
#define MIPI_VIDEO_PANEL	8	/* MIPI */
#define MIPI_CMD_PANEL		9	/* MIPI */


#define MSM_FB_SINGLE_MODE_PANEL(pinfo)		\
	do {					\
		(pinfo)->mode2_xres = 0;	\
		(pinfo)->mode2_yres = 0;	\
		(pinfo)->mode2_bpp = 0;		\
	} while (0)

#endif
