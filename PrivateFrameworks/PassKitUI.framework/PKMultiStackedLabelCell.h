
@interface PKMultiStackedLabelCell : UICollectionViewListCell {
    double  _paddingBetweenRows;
    NSArray * _sources;
    NSArray * _textLabels;
}

@property (nonatomic) double paddingBetweenRows;
@property (nonatomic, copy) NSArray *sources;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)layoutSubviews;
- (double)paddingBetweenRows;
- (void)prepareForReuse;
- (void)setPaddingBetweenRows:(double)arg1;
- (void)setSources:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sources;

@end
