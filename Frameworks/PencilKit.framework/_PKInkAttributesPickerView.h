
@interface _PKInkAttributesPickerView : UIView <_PKColorAlphaSliderDelegate> {
    <_PKColorAlphaSlider> * _colorAlphaSlider;
    UIView * _colorAlphaSliderView;
    <_PKInkAttributesPickerViewDelegate> * _delegate;
    unsigned long long  _displayMode;
    PKInk * _ink;
    double  _minimumOpacityValue;
    UIView * _separatorView;
    _PKInkThicknessPicker * _thicknessPicker;
    PKToolConfiguration * _toolConfiguration;
}

@property (nonatomic, retain) <_PKColorAlphaSlider> *colorAlphaSlider;
@property (nonatomic, retain) UIView *colorAlphaSliderView;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PKInkAttributesPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKInk *ink;
@property (nonatomic) double minimumOpacityValue;
@property (nonatomic, retain) UIView *separatorView;
@property (readonly) Class superclass;
@property (nonatomic, retain) _PKInkThicknessPicker *thicknessPicker;
@property (nonatomic, retain) PKToolConfiguration *toolConfiguration;

- (void).cxx_destruct;
- (void)_colorAlphaSliderUserDidChangeSlider:(id)arg1;
- (void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1;
- (void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1;
- (void)_opacityValueChanged:(id)arg1;
- (void)_thicknessValueChanged:(id)arg1;
- (void)_updateUI;
- (id)colorAlphaSlider;
- (id)colorAlphaSliderView;
- (long long)colorUserInterfaceStyle;
- (id)delegate;
- (unsigned long long)displayMode;
- (id)initWithInk:(id)arg1 toolConfiguration:(id)arg2;
- (id)ink;
- (void)layoutSubviews;
- (double)minimumOpacityValue;
- (id)separatorView;
- (void)setColorAlphaSlider:(id)arg1;
- (void)setColorAlphaSliderView:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setInk:(id)arg1;
- (void)setInk:(id)arg1 animated:(bool)arg2;
- (void)setMinimumOpacityValue:(double)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setThicknessPicker:(id)arg1;
- (void)setToolConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thicknessPicker;
- (id)toolConfiguration;

@end
