
@protocol PXGMetalRenderDestinationDelegate <NSObject>

@required

- (void)renderDestination:(id <PXGMetalRenderDestination>)arg1 renderSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)renderDestinationDeviceDidChange:(id <PXGMetalRenderDestination>)arg1;
- (void)renderDestinationRequestRender:(id <PXGMetalRenderDestination>)arg1;

@end
