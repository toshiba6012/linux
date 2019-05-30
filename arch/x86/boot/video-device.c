I dont know c but I can kind of get it. This is to support touchscreens and laptops with HDMI. This file will be called by 
boot.h and will search HDMI-1-A and HDMI-2-A for a device. If one is found the kernel will disable LVDS-1 and eDP-1-A and 
video=HDMI-1-A. This will take linux and Android to a new level. I know about this because of /sys/class/drm I searched the
boot folder and there is nothing on HDMI-1-A. So I think you can adjust a generated header it's that simple ignore device call
and search HDMI-1-A and it doesn't affect desktops. Thanks again!

