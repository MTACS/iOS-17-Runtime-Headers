
@interface PBUIWallpaperEffectImageRequestActionIOSurfaceResponse : PBUIWallpaperEffectImageRequestActionResponse

@property (nonatomic, readonly) IOSurface *ioSurface;

- (id)initWithActualStyle:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 ioSurface:(id)arg3;
- (id)ioSurface;

@end
