
@interface CPSNameStackView : UIStackView {
    double  _fittingWidth;
}

@property (nonatomic) double fittingWidth;

- (double)fittingWidth;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setFittingWidth:(double)arg1;

@end
