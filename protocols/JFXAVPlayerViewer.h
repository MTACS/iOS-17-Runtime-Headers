
@protocol JFXAVPlayerViewer <NSObject>

@required

- (void)configureDisplayAttributesForColorSpace:(PVColorSpace *)arg1;
- (struct CGSize { double x1; double x2; })displaySize;
- (bool)isReadyForDisplay;
- (AVPlayer *)player;
- (void)setPlayer:(AVPlayer *)arg1;
- (void)setShowAVControls:(bool)arg1;
- (void)setVideoGravity:(NSString *)arg1;
- (bool)showAVControls;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (NSString *)videoGravity;

@end
