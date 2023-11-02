
@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator> {
    SBAirplaneModeController * _airplaneModeController;
    SBTelephonyManager * _telephonyManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_airplaneModeController;
- (id)_telephonyManager;
- (id)init;
- (id)initWithAirplaneModeController:(id)arg1 telephonyManager:(id)arg2;
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)arg1;

@end
