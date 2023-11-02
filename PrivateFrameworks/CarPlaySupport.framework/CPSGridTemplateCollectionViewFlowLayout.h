
@interface CPSGridTemplateCollectionViewFlowLayout : UICollectionViewFlowLayout {
    double  _preferredItemWidth;
}

@property (nonatomic) double preferredItemWidth;

- (id)gridItemLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfItems:(unsigned long long)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)preferredItemWidth;
- (void)setPreferredItemWidth:(double)arg1;

@end
