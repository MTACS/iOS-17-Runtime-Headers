
@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling> {
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelOrientationUpdateDeferral;
- (void)deferOrientationUpdatesWithReason:(id)arg1;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;

@end
