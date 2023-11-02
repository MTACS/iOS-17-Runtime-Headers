
@interface CSFocusActivityView : CSCoverSheetViewBase <SBUILegibility> {
    CSFocusActivityIndicator * _activityIndicator;
    <CSFocusActivityViewDelegate> * _delegate;
    bool  _enabled;
}

@property (nonatomic, retain) <FCActivityDescribing> *activity;
@property (nonatomic, readonly) UIView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSFocusActivityViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActivityIndicatorVisible;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })activityViewSize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activityIndicatorFrame;
- (void)_addActivityIndicatorTargetActions;
- (void)_handleButtonPress:(id)arg1;
- (void)_handleButtonTouchBegan:(id)arg1;
- (void)_handleButtonTouchEnded:(id)arg1;
- (void)_removeActivityIndicatorTargetActions;
- (id)activity;
- (id)activityIndicator;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (bool)isActivityIndicatorVisible;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)removeIndicator;
- (void)setActivity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;

@end
