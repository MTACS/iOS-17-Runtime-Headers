
@interface _UITextItemHighlightView : _UIShapeView {
    double  _cornerRadius;
    UIColor * _fillColor;
    double  _horizontalPadding;
    NSArray * _textLineRects;
    double  _verticalPadding;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) double horizontalPadding;
@property (nonatomic, copy) NSArray *textLineRects;
@property (nonatomic) double verticalPadding;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_padding;
- (void)_updateShape;
- (double)cornerRadius;
- (id)fillColor;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setTextLineRects:(id)arg1;
- (void)setVerticalPadding:(double)arg1;
- (id)textLineRects;
- (double)verticalPadding;

@end
