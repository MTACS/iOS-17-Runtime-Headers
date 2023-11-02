
@protocol CSOrientationUpdateControlling <NSObject>

@required

- (void)cancelOrientationUpdateDeferral;
- (void)deferOrientationUpdatesWithReason:(NSString *)arg1;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(NSString *)arg3;

@end
