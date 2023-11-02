
@protocol PBUIWallpaperClientToServerInterface <NSObject>

@required

- (_UILegibilitySettings *)getWallpaperLegibilitySettingsForVariant:(NSString *)arg1;
- (PBUIWallpaperOptions *)getWallpaperOptionsForVariant:(NSString *)arg1;
- (void)removeWallpaperVideo;
- (void)restoreDefaultWallpaper;
- (void)setProceduralWallpaperIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 locations:(NSString *)arg3;
- (bool)setWallpaperColor:(UIColor *)arg1 darkColor:(UIColor *)arg2 forLocations:(NSString *)arg3;
- (bool)setWallpaperGradient:(PBUIWallpaperGradient *)arg1 forLocations:(NSString *)arg2;
- (bool)setWallpaperImage:(NSObject<OS_xpc_object> *)arg1 adjustedImage:(NSObject<OS_xpc_object> *)arg2 thumbnailData:(NSData *)arg3 imageHashData:(NSData *)arg4 wallpaperOptions:(PBUIWallpaperOptions *)arg5 forLocations:(NSString *)arg6 currentWallpaperMode:(NSString *)arg7;
- (bool)setWallpaperWithVideo:(NSURL *)arg1 sandboxToken:(NSData *)arg2 cropRect:(NSString *)arg3 wallpaperMode:(NSString *)arg4;

@end
