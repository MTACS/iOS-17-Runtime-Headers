
@interface SBSUIWallpaperService : NSObject

+ (id)_remoteTargetForServiceClientConnection:(id)arg1;
+ (id)_setupAndActivateServiceClientConnection;
+ (id)getWallpaperLegibilitySettingsForVariant:(id)arg1;
+ (id)getWallpaperOptionsForVariant:(id)arg1;
+ (void)removeWallpaperVideo;
+ (void)restoreDefaultWallpaper;
+ (void)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 locations:(id)arg3;
+ (bool)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forLocations:(id)arg3;
+ (bool)setWallpaperGradient:(id)arg1 forLocations:(id)arg2;
+ (bool)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 imageHashData:(id)arg4 wallpaperOptions:(id)arg5 forLocations:(id)arg6 currentWallpaperMode:(id)arg7;
+ (bool)setWallpaperWithVideo:(id)arg1 sandboxToken:(id)arg2 cropRect:(id)arg3 wallpaperMode:(id)arg4;

@end
