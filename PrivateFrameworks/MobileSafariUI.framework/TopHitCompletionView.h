
@interface TopHitCompletionView : UIView {
    NSAttributedString * _attributedText;
    UIColor * _highlightColor;
    unsigned long long  _highlightStartIndex;
}

@property (nonatomic, copy) UIColor *highlightColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)highlightColor;
- (void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned long long)arg2;
- (void)setHighlightColor:(id)arg1;

@end
