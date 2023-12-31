
@protocol TSDDecorator <NSObject>

@required

- (NSArray *)decoratorOverlayLayers;

@optional

- (void)didEndDynamicOperation;
- (void)didEndScrollingOperation;
- (void)didEndZoomingOperation;
- (void)screenScaleDidChange;
- (void)willBeginDynamicOperation;
- (void)willBeginScrollingOperation;
- (void)willBeginZoomingOperation;

@end
