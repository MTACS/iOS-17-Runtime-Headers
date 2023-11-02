
@protocol PXViewControllerEventTracker <PXUserInterfaceElementEventTracker>

@required

- (void)logViewControllerDidAppear:(NSObject<PXAnonymousViewController> *)arg1;
- (void)logViewControllerDidDisappear:(NSObject<PXAnonymousViewController> *)arg1;

@end
