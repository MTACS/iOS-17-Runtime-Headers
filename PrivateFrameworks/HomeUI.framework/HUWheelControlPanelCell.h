
@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate> {
    UILabel * _detailLabel;
    NSArray * _dynamicConstraints;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    UIView * _separatorView;
    NSArray * _staticConstraints;
    NSNumber * _stepValue;
    UILabel * _titleLabel;
    NSFormatter * _valueFormatter;
    HUWheelControlPopUpButton * _wheelButton;
    NSArray * _wheelValues;
    HUWheelControlView * _wheelView;
    bool  _wheelViewVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, copy) NSString *detailText;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, retain) NSArray *dynamicConstraints;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maxValue;
@property (nonatomic, retain) NSNumber *minValue;
@property (nonatomic, readonly) UIView *separatorView;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (nonatomic, retain) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic, retain) HUWheelControlPopUpButton *wheelButton;
@property (nonatomic, retain) NSArray *wheelValues;
@property (nonatomic, retain) HUWheelControlView *wheelView;
@property (nonatomic) bool wheelViewVisible;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_defaultMaxValue;
- (id)_defaultMinValue;
- (id)_defaultStepValue;
- (id)_defaultValueFormatter;
- (void)_generateWheelValuesWithMinValue:(double)arg1 maxValue:(double)arg2 stepValue:(double)arg3;
- (id)allControlViews;
- (id)detailLabel;
- (id)detailText;
- (id)dynamicConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (void)layoutSubviews;
- (id)maxValue;
- (id)minValue;
- (void)prepareForReuse;
- (id)separatorView;
- (void)setDetailText:(id)arg1;
- (void)setDynamicConstraints:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setWheelButton:(id)arg1;
- (void)setWheelValues:(id)arg1;
- (void)setWheelView:(id)arg1;
- (void)setWheelViewVisible:(bool)arg1;
- (id)staticConstraints;
- (id)stepValue;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)valueFormatter;
- (id)wheelButton;
- (void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2;
- (id)wheelValues;
- (id)wheelView;
- (bool)wheelViewVisible;

@end
