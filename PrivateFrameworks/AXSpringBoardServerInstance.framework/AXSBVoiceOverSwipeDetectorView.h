
@interface AXSBVoiceOverSwipeDetectorView : UIView {
    UIImageView * _bgImageView;
    <AXSBVoiceOverSwipeDetectorDelegate> * _delegate;
    bool  _swipeDetected;
    UILabel * _titleLabel;
}

@property (nonatomic) <AXSBVoiceOverSwipeDetectorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelVOSwipeActivation:(id)arg1;
- (void)_swipeDetected:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
