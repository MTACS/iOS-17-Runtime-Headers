
@protocol DNDStateUpdateListener <NSObject>

@required

- (void)stateService:(DNDStateService *)arg1 didReceiveDoNotDisturbStateUpdate:(DNDStateUpdate *)arg2;

@end
