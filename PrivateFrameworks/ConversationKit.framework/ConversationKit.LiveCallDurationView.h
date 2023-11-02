
@interface ConversationKit.LiveCallDurationView : UIView {
    void controller;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) double alpha;
@property (nonatomic) bool hidden;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (double)alpha;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHidden;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
