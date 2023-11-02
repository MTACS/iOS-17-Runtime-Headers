
@interface MagnifierSupport.DepthLabel : UILabel {
    void _bottomInset;
    void _rightInset;
    void _textHeight;
    void _topInset;
    void kBottomInset;
    void kDigitFont;
    void kSpaceFont;
    void kUnitFont;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (void).cxx_destruct;
- (id)attributedText;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)rotateIfPossibleTo:(long long)arg1;
- (void)setAttributedText:(id)arg1;

@end
