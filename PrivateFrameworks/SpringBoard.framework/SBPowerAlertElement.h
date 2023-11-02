
@interface SBPowerAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding> {
    double  _batteryPercentage;
    UIColor * _keyColor;
    UILabel * _leadingLabel;
    bool  _lowPowerModeEnabled;
    BSUICAPackageView * _minimalBatteryIconPackageView;
    unsigned long long  _style;
    BSUICAPackageView * _trailingBatteryIconPackageView;
    UILabel * _trailingBatteryLabel;
}

@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic) double batteryPercentage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, retain) UILabel *leadingLabel;
@property (getter=isLowPowerModeEnabled, nonatomic) bool lowPowerModeEnabled;
@property (nonatomic, retain) BSUICAPackageView *minimalBatteryIconPackageView;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUICAPackageView *trailingBatteryIconPackageView;
@property (nonatomic, retain) UILabel *trailingBatteryLabel;

- (void).cxx_destruct;
- (double)_batteryFillWidthForBatteryPercentage:(double)arg1;
- (id)_leadingTextForStyle:(unsigned long long)arg1;
- (double)_trailingViewWidth;
- (void)_updateBatteryContent;
- (void)_updateBatteryIconFillAreaForPackageView:(id)arg1 withBatteryPercentage:(double)arg2;
- (void)_updateMinimalViewToState:(id)arg1 withDelay:(bool)arg2;
- (double)batteryPercentage;
- (id)initWithIdentifier:(id)arg1 style:(unsigned long long)arg2 batteryPercentage:(double)arg3 lowPowerModeEnabled:(bool)arg4 action:(id)arg5;
- (bool)isLowPowerModeEnabled;
- (bool)isProvidedViewConcentric:(id)arg1 inLayoutMode:(long long)arg2;
- (id)keyColor;
- (id)leadingLabel;
- (id)minimalBatteryIconPackageView;
- (double)preferredAlertingDuration:(double)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)setBatteryPercentage:(double)arg1;
- (void)setLeadingLabel:(id)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setMinimalBatteryIconPackageView:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTrailingBatteryIconPackageView:(id)arg1;
- (void)setTrailingBatteryLabel:(id)arg1;
- (unsigned long long)style;
- (id)trailingBatteryIconPackageView;
- (id)trailingBatteryLabel;

@end
