
@protocol TSDLayerAndSubviewHosting <NSObject>

@required

- (CALayer *)containerLayer;
- (UIView *)containerView;
- (UIViewController *)containerViewController;
- (TSDCanvasSubviewsController *)subviewsController;
- (NSArray *)topLevelReps;
- (CALayer *)topLevelTilingLayer;

@end
