
@protocol SPMonitorsWrapperDelegate <NSObject>

@required

- (bool)isBeaconing;
- (void)stateDidChange:(bool)arg1 powerState:(unsigned long long)arg2;

@end
