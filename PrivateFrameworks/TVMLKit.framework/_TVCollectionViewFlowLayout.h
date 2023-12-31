
@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout {
    bool  _heterogeneous;
}

@property (getter=isHeterogeneous, nonatomic) bool heterogeneous;

- (double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2;
- (long long)developmentLayoutDirection;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHeterogeneous;
- (void)setHeterogeneous:(bool)arg1;

@end
