
@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec {
    long long  _fullMomentsSectionHeaderStyle;
    bool  _shouldUseAspectItems;
}

@property (nonatomic, readonly) double contentCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullMomentsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) long long fullMomentsSectionHeaderStyle;
@property (nonatomic, readonly) bool shouldUseAspectItems;

+ (id)padSpec;
+ (id)phoneSpec;

- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (long long)fullMomentsSectionHeaderStyle;
- (id)gridSpec;
- (bool)shouldUseAspectItems;

@end
