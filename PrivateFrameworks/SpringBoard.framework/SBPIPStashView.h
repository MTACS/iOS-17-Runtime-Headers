
@interface SBPIPStashView : UIView <PTSettingsKeyObserver> {
    SBPIPBackdropView * _backdropView;
    double  _blurProgress;
    bool  _chevronsHidden;
    double  _completeBlurThreshold;
    UIView * _darkTintView;
    bool  _isChevronShownLeft;
    UIImageView * _leftChevron;
    UIView * _lightTintView;
    UIImageView * _rightChevron;
    SBPIPStashVisualSettings * _settings;
    double  _startBlurThreshold;
    double  _stashedTabWidth;
}

@property (nonatomic) double blurProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double stashedTabWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateSettingsDerivedValues;
- (double)blurProgress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (void)layoutStashChevrons;
- (void)layoutSubviews;
- (void)resetChevronState;
- (void)setBlurProgress:(double)arg1;
- (void)setChevronHidden:(bool)arg1 left:(bool)arg2;
- (void)setStashedTabWidth:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)stashedTabWidth;
- (void)traitCollectionDidChange:(id)arg1;

@end
