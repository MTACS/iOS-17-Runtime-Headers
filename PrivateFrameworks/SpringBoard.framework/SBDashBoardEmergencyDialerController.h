
@interface SBDashBoardEmergencyDialerController : NSObject <CSEmergencyCalling, PTSettingsKeyObserver, SBLockScreenCallHandling> {
    CSCoverSheetViewController * _coverSheetViewController;
    SBDashBoardEmergencyDialerViewController * _emergencyDialerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(bool)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (bool)isMakingEmergencyCall;
- (void)launchEmergencyDialer;
- (void)launchEmergencyDialerAnimated:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
