
@protocol _UICollectionLayoutAuxillaryHosting <NSObject>

@required

- (NSArray *)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (<NSCollectionLayoutContainer> *)auxillaryHostContainer;
- (struct CGSize { double x1; double x2; })auxillaryHostContentSize;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })auxillaryHostPinningRect;
- (_UICollectionPreferredSizes *)auxillaryHostPreferredSizes;
- (bool)auxillaryHostShouldLayoutRTL;
- (_UICollectionLayoutSupplementaryEnroller *)auxillaryHostSupplementaryEnroller;
- (UITraitCollection *)auxillaryHostTraitCollection;
- (bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;

@optional

- (struct CGPoint { double x1; double x2; })auxillaryHostAdditionalFrameOffset;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;

@end
