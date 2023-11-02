
@protocol _UICollectionLayoutAuxillaryItem <NSObject>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveContentInsets;
- (NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
- (NSCollectionLayoutAnchor *)containerAnchor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (NSCollectionLayoutDecorationItem *)decorationItem;
- (NSString *)elementKind;
- (NSCollectionLayoutItem *)item;
- (NSCollectionLayoutAnchor *)itemAnchor;
- (NSCollectionLayoutSize *)size;
- (NSCollectionLayoutSupplementaryItem *)supplementaryItem;
- (long long)zIndex;

@end
