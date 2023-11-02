
@interface ConversationKit.ParticipantViewButton : UIControl {
    void blurView;
    void colorConfiguration;
    void discView;
    void image;
    void imageView;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
