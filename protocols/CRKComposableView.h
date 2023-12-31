
@protocol CRKComposableView <NSObject>

@required

- (void)addCardSectionSubview:(UIView<CRKCardSectionView> *)arg1 withKeyline:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardSectionContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(UIView<CRKCardSectionView> *)arg1;
- (NSArray *)cardSectionSubviews;

@end
