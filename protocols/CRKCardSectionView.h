
@protocol CRKCardSectionView <NSObject>

@required

+ (struct CGSize { double x1; double x2; })sizeThatFitsCardSection:(id <CRCardSection>)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;

- (NSString *)cardSectionViewIdentifier;
- (UIView<CRKComposableView> *)composedSuperview;
- (void)removeFromComposedSuperview;
- (void)setCardSectionViewIdentifier:(NSString *)arg1;
- (void)setComposedSuperview:(UIView<CRKComposableView> *)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
