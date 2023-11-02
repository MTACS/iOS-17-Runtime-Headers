
@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {
    SBLockScreenTemperatureWarningView * _warningView;
}

@property (nonatomic, readonly) NSString *slideToUnlockText;

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)slideToUnlockText;

@end
