
@interface SBLowPowerFindMyAlertItem : SBAlertItem {
    SPBeaconManager * _beaconManager;
}

@property (nonatomic, retain) SPBeaconManager *beaconManager;

+ (void)_readSupportsFindMy:(id /* block */)arg1;
+ (void)showFindMyAlert;

- (void).cxx_destruct;
- (id)beaconManager;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)setBeaconManager:(id)arg1;
- (bool)shouldShowInLockScreen;
- (bool)wakeDisplay;

@end
