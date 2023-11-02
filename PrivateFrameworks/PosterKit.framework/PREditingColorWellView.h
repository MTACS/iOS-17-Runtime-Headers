
@interface PREditingColorWellView : UIView {
    PREditingColorWell * _colorWell;
}

@property (nonatomic, readonly) PREditingColorWell *colorWell;

- (void).cxx_destruct;
- (id)colorWell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
