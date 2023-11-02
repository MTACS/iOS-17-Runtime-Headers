
@protocol AVTSectionItemTransitionModel <AVTTransitionModel>

@required

- (void)cleanupAfterTransition;
- (CALayer *)fromLayer;
- (void)prepareForTransitionToImage:(UIImage *)arg1;
- (CALayer *)toLayer;

@end
