
@interface CSFocusActivityIndicator : UICoverSheetButton <SBUILegibility> {
    <FCActivityDescribing> * _activity;
    _UILegibilitySettings * _legibilitySettings;
    <FCActivityDescribing> * _previousActivity;
    double  _strength;
}

@property (nonatomic, retain) <FCActivityDescribing> *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })activityIndicatorExpandedSize;
+ (struct CGSize { double x1; double x2; })activityIndicatorSize;

- (void).cxx_destruct;
- (void)_setSelected:(bool)arg1;
- (void)_updateForActivity;
- (void)_updateStyle;
- (long long)_userInterfaceStyleForCurrentActivity;
- (id)activity;
- (id)init;
- (id)legibilitySettings;
- (void)setActivity:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStrength:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;

@end
