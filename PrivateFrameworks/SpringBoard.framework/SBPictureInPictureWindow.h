
@interface SBPictureInPictureWindow : UIWindow

@property (nonatomic, retain) SBPIPContainerViewController *rootViewController;

- (bool)_allowsOcclusionDetectionOverride;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setWindowScene:(id)arg1;

@end
