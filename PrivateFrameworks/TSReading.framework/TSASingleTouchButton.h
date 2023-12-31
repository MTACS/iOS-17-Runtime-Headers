
@interface TSASingleTouchButton : UIButton {
    bool  _showsTouchOnTopWhenHighlighted;
    UIImage * _touchImage;
}

@property (nonatomic) bool showsTouchOnTopWhenHighlighted;
@property (nonatomic, retain) UIImage *touchImage;

- (id)_pressFeedbackImage;
- (struct CGPoint { double x1; double x2; })_pressFeedbackPosition;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setShowsTouchOnTopWhenHighlighted:(bool)arg1;
- (void)setTouchImage:(id)arg1;
- (bool)showsTouchOnTopWhenHighlighted;
- (id)touchImage;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
