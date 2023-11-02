
@interface VKCTextHighlightDot : UIView {
    CALayer * _circleLayer;
    UIColor * _highlightColor;
    bool  _pulsing;
    CALayer * _pulsingLayer;
    struct VKQuadSideLength { 
        double left; 
        double right; 
        double top; 
        double bottom; 
    }  _quadSideLength;
    CALayer * _textHighlightLayer;
}

@property (nonatomic, retain) CALayer *circleLayer;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) bool pulsing;
@property (nonatomic, retain) CALayer *pulsingLayer;
@property (nonatomic) struct VKQuadSideLength { double x1; double x2; double x3; double x4; } quadSideLength;
@property (nonatomic) CALayer *textHighlightLayer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateLayout;
- (id)circleLayer;
- (void)configureForPulsing:(bool)arg1;
- (id)highlightColor;
- (id)initWithColor:(id)arg1;
- (void)layoutSubviews;
- (double)opacityForCurrentQuadSize;
- (bool)pulsing;
- (id)pulsingLayer;
- (struct VKQuadSideLength { double x1; double x2; double x3; double x4; })quadSideLength;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForIndicatorDot;
- (void)setCircleLayer:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setPulsingLayer:(id)arg1;
- (void)setQuadSideLength:(struct VKQuadSideLength { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextHighlightLayer:(id)arg1;
- (id)textHighlightLayer;
- (void)updateIndicatorDotForState;

@end
