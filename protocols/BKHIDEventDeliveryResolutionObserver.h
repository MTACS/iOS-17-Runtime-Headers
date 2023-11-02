
@protocol BKHIDEventDeliveryResolutionObserver <NSObject>

@required

- (void)resolutionsDidChange:(NSSet *)arg1 forPID:(int)arg2;

@end
