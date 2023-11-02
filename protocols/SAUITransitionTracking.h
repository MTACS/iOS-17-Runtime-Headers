
@protocol SAUITransitionTracking <NSObject>

@required

- (void)beginTrackingTransitionWithUniqueIdentifier:(NSUUID *)arg1 reason:(NSString *)arg2;
- (void)endTrackingTransitionWithUniqueIdentifier:(NSUUID *)arg1;
- (bool)isTrackingTransition;

@optional

- (bool)isTrackingTransitionWithReason:(NSString *)arg1;

@end
