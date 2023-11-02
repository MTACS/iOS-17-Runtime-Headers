
@protocol HFActionBuilderFactory <NSObject>

@required

- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActions;
- (NAFuture *)currentStateActionBuildersForHome:(HMHome *)arg1;

@end
