
@interface VUIRoundButton : UIView {
    UIButton * _button;
    UIImage * _buttonImage;
    <VUIRoundButtonDelegate> * _delegate;
    UIStackView * _textLabelStackView;
    NSArray * _textLabels;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) UIImage *buttonImage;
@property (nonatomic) <VUIRoundButtonDelegate> *delegate;
@property (nonatomic, retain) UIStackView *textLabelStackView;
@property (nonatomic, retain) NSArray *textLabels;

- (void).cxx_destruct;
- (void)_setUpViews;
- (id)button;
- (id)buttonImage;
- (void)buttonPressed:(id)arg1;
- (void)buttonReleased:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)configureTextStackView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setButton:(id)arg1;
- (void)setButtonImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTextLabelStackView:(id)arg1;
- (void)setTextLabels:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabelStackView;
- (id)textLabels;

@end
