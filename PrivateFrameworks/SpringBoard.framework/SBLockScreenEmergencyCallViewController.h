
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {
    <SBLockScreenEmergencyCallViewControllerDelegate> * _delegate;
}

@property (nonatomic) <SBLockScreenEmergencyCallViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;
- (id)delegate;
- (void)dismiss;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
