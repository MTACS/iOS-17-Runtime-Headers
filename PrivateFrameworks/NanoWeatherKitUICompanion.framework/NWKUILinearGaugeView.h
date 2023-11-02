
@interface NWKUILinearGaugeView : UIView {
    NSArray * _backgroundColorIndices;
    CAGradientLayer * _backgroundGaugeLayer;
    NSArray * _colorIndices;
    CAGradientLayer * _gaugeLayer;
    CALayer * _gaugeWrapperLayer;
    double  _highValue;
    bool  _includeBackground;
    UIColor * _indicatorFillColor;
    double  _lastLayoutSubviewsHeight;
    struct { 
        double width; 
        double indicatorDiameter; 
        double indicatorStrokeWidth; 
    }  _layoutConstants;
    bool  _renderValueAsPercentage;
    double  _value;
    UIView * _valueIndicator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _valueIndicatorCutoutFrame;
}

@property (nonatomic, retain) NSArray *backgroundColorIndices;
@property (nonatomic, retain) CAGradientLayer *backgroundGaugeLayer;
@property (nonatomic, retain) NSArray *colorIndices;
@property (nonatomic, retain) CAGradientLayer *gaugeLayer;
@property (nonatomic, retain) CALayer *gaugeWrapperLayer;
@property (nonatomic) double highValue;
@property (getter=shouldIncludeBackground, nonatomic) bool includeBackground;
@property (nonatomic, copy) UIColor *indicatorFillColor;
@property (nonatomic) double lastLayoutSubviewsHeight;
@property (nonatomic) struct { double x1; double x2; double x3; } layoutConstants;
@property (getter=shouldRenderValueAsPercentage, nonatomic) bool renderValueAsPercentage;
@property (nonatomic) double value;
@property (nonatomic, retain) UIView *valueIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } valueIndicatorCutoutFrame;

- (void).cxx_destruct;
- (void)_applyCGColors:(id)arg1 toGradientLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })_centerOfValueIndicator:(id)arg1;
- (id)_cgColorsFromColorIndices:(id)arg1;
- (id)_createGradientLayer;
- (void)_gradientLocationInformationForGaugeWithHeight:(double)arg1 colorIndices:(id)arg2 handler:(id /* block */)arg3;
- (void)_setNeedsUpdateGauge;
- (void)applyBackgroundGaugeFilters:(id)arg1 fraction:(double)arg2;
- (void)applyForegroundGaugeFilters:(id)arg1;
- (void)applyIndicatorFillColor:(id)arg1;
- (id)backgroundColorIndices;
- (id)backgroundGaugeLayer;
- (id)colorIndices;
- (id)gaugeLayer;
- (id)gaugeWrapperLayer;
- (double)highValue;
- (id)indicatorFillColor;
- (id)initWithLayoutConstants:(struct { double x1; double x2; double x3; })arg1;
- (void)interpolateIndicatorWithColor:(id)arg1 fraction:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)lastLayoutSubviewsHeight;
- (struct { double x1; double x2; double x3; })layoutConstants;
- (void)layoutSubviews;
- (void)setBackgroundColorIndices:(id)arg1;
- (void)setBackgroundGaugeLayer:(id)arg1;
- (void)setColorIndices:(id)arg1;
- (void)setGaugeLayer:(id)arg1;
- (void)setGaugeWrapperLayer:(id)arg1;
- (void)setHighValue:(double)arg1;
- (void)setIncludeBackground:(bool)arg1;
- (void)setIndicatorFillColor:(id)arg1;
- (void)setLastLayoutSubviewsHeight:(double)arg1;
- (void)setLayoutConstants:(struct { double x1; double x2; double x3; })arg1;
- (void)setRenderValueAsPercentage:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setValueIndicator:(id)arg1;
- (void)setValueIndicatorCutoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldIncludeBackground;
- (bool)shouldRenderValueAsPercentage;
- (double)value;
- (id)valueIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueIndicatorCutoutFrame;

@end
