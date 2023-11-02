
@interface AVTColorSlider : UISlider {
    <AVTColorSliderDelegate> * _delegate;
    _UIEdgeFeedbackGenerator * _edgeFeedbackGenerator;
    long long  _layoutDirection;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    bool  _shouldTriggerFeedback;
    CAShapeLayer * _thumbBorderLayer;
    CAShapeLayer * _thumbClippingLayer;
    CALayer * _thumbContentLayer;
    CALayer * _thumbSoftShadowLayer;
    UIImageView * _thumbView;
    CALayer * _trackLayer;
}

@property (nonatomic) <AVTColorSliderDelegate> *delegate;
@property (nonatomic, retain) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic) bool shouldTriggerFeedback;
@property (nonatomic, retain) CAShapeLayer *thumbBorderLayer;
@property (nonatomic, retain) CAShapeLayer *thumbClippingLayer;
@property (nonatomic, retain) CALayer *thumbContentLayer;
@property (nonatomic, readonly) CALayer *thumbLayer;
@property (nonatomic, retain) CALayer *thumbSoftShadowLayer;
@property (nonatomic, retain) UIImageView *thumbView;
@property (nonatomic, retain) CALayer *trackLayer;

- (void).cxx_destruct;
- (id)createThumbView;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)delegate;
- (id)edgeFeedbackGenerator;
- (id)initWithUserInterfaceLayoutDirection:(long long)arg1;
- (long long)layoutDirection;
- (void)layoutSubviews;
- (void)relayoutSublayers;
- (void)removeTrackLayer:(id)arg1 animated:(bool)arg2;
- (id)selectionFeedbackGenerator;
- (void)setDelegate:(id)arg1;
- (void)setEdgeFeedbackGenerator:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (void)setShouldTriggerFeedback:(bool)arg1;
- (void)setThumbBorderLayer:(id)arg1;
- (void)setThumbClippingLayer:(id)arg1;
- (void)setThumbContentLayer:(id)arg1;
- (void)setThumbSoftShadowLayer:(id)arg1;
- (void)setThumbView:(id)arg1;
- (void)setTrackLayer:(id)arg1;
- (void)setTrackLayer:(id)arg1 animated:(bool)arg2;
- (bool)shouldTriggerFeedback;
- (id)thumbBorderLayer;
- (id)thumbClippingLayer;
- (id)thumbContentLayer;
- (id)thumbLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbSoftShadowLayer;
- (id)thumbView;
- (struct CGColor { }*)trackBorderColor;
- (id)trackLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)valueDidChange:(id)arg1 forEvent:(id)arg2;

@end
