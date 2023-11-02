
@interface AVTRecordingButton : UIButton {
    UIColor * _centerCircleColor;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    bool  _forceUsePhoneStyle;
    UIImageView * _iconView;
    bool  _ignoresLongPress;
    CAShapeLayerAnimated * _innerCircle;
    bool  _isTrackingLongPress;
    NSDate * _lastFeedbackSent;
    <AVTRecordingButtonLongPressDelegate> * _longPressDelegate;
    CAShapeLayerAnimated * _outerCircle;
    UIActivityIndicatorView * _spinner;
    unsigned long long  _uiState;
}

@property (nonatomic, retain) UIColor *centerCircleColor;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool forceUsePhoneStyle;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) bool ignoresLongPress;
@property (nonatomic, retain) CAShapeLayerAnimated *innerCircle;
@property (nonatomic) bool isTrackingLongPress;
@property (nonatomic, retain) NSDate *lastFeedbackSent;
@property (nonatomic) <AVTRecordingButtonLongPressDelegate> *longPressDelegate;
@property (nonatomic, retain) CAShapeLayerAnimated *outerCircle;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (setter=setUIState:, nonatomic) unsigned long long uiState;

- (void).cxx_destruct;
- (id)centerCircleColor;
- (void)configure;
- (void)endLongPress:(bool)arg1;
- (id)feedbackGenerator;
- (bool)forceUsePhoneStyle;
- (id)iconView;
- (bool)ignoresLongPress;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerCircle;
- (bool)isTrackingLongPress;
- (id)lastFeedbackSent;
- (void)layoutSubviews;
- (id)longPressDelegate;
- (id)outerCircle;
- (void)sendHapticFeedbackIfNeeded;
- (void)setCenterCircleColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setForceUsePhoneStyle:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setIgnoresLongPress:(bool)arg1;
- (void)setInnerCircle:(id)arg1;
- (void)setIsTrackingLongPress:(bool)arg1;
- (void)setLastFeedbackSent:(id)arg1;
- (void)setLongPressDelegate:(id)arg1;
- (void)setOuterCircle:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUIState:(unsigned long long)arg1;
- (id)spinner;
- (void)startLongPress;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)uiState;

@end
