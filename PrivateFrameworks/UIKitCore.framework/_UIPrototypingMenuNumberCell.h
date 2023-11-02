
@interface _UIPrototypingMenuNumberCell : _UIPrototypingMenuCell {
    double  _current;
    UIStackView * _floatValueStackView;
    double  _max;
    UILabel * _maxLabel;
    double  _min;
    UILabel * _minLabel;
    _UIPrototypingMenuSlider * _slider;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) double current;
@property (nonatomic, retain) UIStackView *floatValueStackView;
@property (nonatomic) double max;
@property (nonatomic, retain) UILabel *maxLabel;
@property (nonatomic) double min;
@property (nonatomic, retain) UILabel *minLabel;
@property (nonatomic, retain) _UIPrototypingMenuSlider *slider;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_prototypingSettingDidChange;
- (void)_sliderDidChangeValue:(id)arg1;
- (void)_tapRecognizerDidRecognizer:(id)arg1;
- (double)current;
- (id)floatValueStackView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)max;
- (id)maxLabel;
- (double)min;
- (id)minLabel;
- (void)setCurrent:(double)arg1;
- (void)setFloatValueStackView:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMaxLabel:(id)arg1;
- (void)setMin:(double)arg1;
- (void)setMinLabel:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)slider;
- (id)tapRecognizer;

@end
