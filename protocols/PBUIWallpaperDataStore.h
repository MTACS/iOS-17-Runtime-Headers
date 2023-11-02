
@protocol PBUIWallpaperDataStore <NSObject>

@required

- (bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setOriginalVideoURL:(NSURL *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(long long)arg2;
- (bool)setVideoURL:(NSURL *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperColor:(UIColor *)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperColorName:(NSString *)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperGradient:(PBUIWallpaperGradient *)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperImage:(UIImage *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperImageHashData:(NSData *)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOptions:(PBUIWallpaperOptions *)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)supportsWallpaperImageHashDataStorage;
- (NSURL *)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSURL *)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSURL *)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (UIColor *)wallpaperColorForVariant:(long long)arg1;
- (NSString *)wallpaperColorNameForVariant:(long long)arg1;
- (PBUIWallpaperGradient *)wallpaperGradientForVariant:(long long)arg1;
- (PBUIWallpaperImage *)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSData *)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (PBUIWallpaperOptions *)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (UIImage *)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSData *)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

@end
