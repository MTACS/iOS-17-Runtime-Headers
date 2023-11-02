
@interface SSOBBoldTrayButton : OBBoldTrayButton {
    NSString * _normalStateTitle;
    SSSpinner * _spinner;
}

@property (retain) NSString *normalStateTitle;
@property (nonatomic, retain) SSSpinner *spinner;

+ (id)boldButton;

- (void).cxx_destruct;
- (void)_centerActivityIndicatorInButton;
- (void)_hideLoading;
- (void)_showLoading;
- (void)_showSpinning;
- (void)hidesBusyIndicator;
- (id)normalStateTitle;
- (void)setNormalStateTitle:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)showsBusyIndicator;
- (id)spinner;
- (void)updateBusyText:(id)arg1;

@end
