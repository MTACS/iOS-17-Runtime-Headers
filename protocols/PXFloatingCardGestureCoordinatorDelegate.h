
@protocol PXFloatingCardGestureCoordinatorDelegate <NSObject>

@required

- (double)availableHeightForCardViewController:(PXFloatingCardViewController *)arg1;

@optional

- (void)cardViewController:(PXFloatingCardViewController *)arg1 didUpdateHeight:(double)arg2;
- (void)cardViewController:(PXFloatingCardViewController *)arg1 didUpdatePosition:(unsigned long long)arg2;
- (void)gestureCoordinatorDidBeginInteraction:(PXFloatingCardGestureCoordinator *)arg1;

@end
