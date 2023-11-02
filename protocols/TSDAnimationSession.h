
@protocol TSDAnimationSession <NSObject>

@required

- (bool)isOffscreenPlayback;
- (void)setShouldAllowBackgroundAlpha:(bool)arg1;
- (void)setShouldDrawTexturesAsynchronously:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldUseSourceImage:(bool)arg1;
- (bool)shouldAllowBackgroundAlpha;
- (bool)shouldDrawTexturesAsynchronously;
- (bool)shouldForceTextureGeneration;
- (bool)shouldUseSourceImage;
- (double)showScale;

@end
