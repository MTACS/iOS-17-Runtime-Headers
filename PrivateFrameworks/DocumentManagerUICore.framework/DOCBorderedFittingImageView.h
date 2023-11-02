
@interface DOCBorderedFittingImageView : DOCFittingImageView {
    bool  _addDecoration;
    double  _decorationCornerRadius;
}

@property (nonatomic) bool addDecoration;
@property (nonatomic) double decorationCornerRadius;

- (bool)addDecoration;
- (double)decorationCornerRadius;
- (void)initCommon;
- (void)layoutSubviews;
- (void)setAddDecoration:(bool)arg1;
- (void)setDecorationCornerRadius:(double)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateImage:(id)arg1 addDecoration:(bool)arg2;

@end
