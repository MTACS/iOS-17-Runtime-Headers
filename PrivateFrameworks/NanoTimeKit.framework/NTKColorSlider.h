
@interface NTKColorSlider : UISlider {
    NSArray * _colors;
    <NTKColorSliderDelegate> * _delegate;
    long long  _layoutDirection;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    bool  _shouldTriggerMidpointFeedback;
    NTKColorSliderThumbView * _thumbContent;
    UIImageView * _thumbView;
    CAGradientLayer * _trackLayer;
}

@property (nonatomic, retain) NSArray *colors;
@property (nonatomic) <NTKColorSliderDelegate> *delegate;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTrackFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (double)_colorGradientStep;
- (void)_setValue:(float)arg1 animated:(bool)arg2;
- (void)_updateThumbColor;
- (bool)_valueIsInsideMidpoint:(float)arg1;
- (id)colors;
- (id)createThumbView;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)valueDidChange:(id)arg1 forEvent:(id)arg2;

@end
