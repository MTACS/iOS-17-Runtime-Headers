
@interface PXPhotosLayoutSpec : PXFeatureSpec {
    bool  _allowsEmptyTitles;
    double  _aspectFitContentVerticalPadding;
    PXAssetsSectionLayoutSpec * _assetsSpec;
    double  _backgroundGradientCornerRadius;
    PXExtendedImageConfiguration * _backgroundGradientImageConfiguration;
    PXExtendedImageConfiguration * _behindContentBackgroundGradientImageConfiguration;
    double  _endButtonSpacing;
    UIFont * _headerSubtitleFont;
    double  _headerTitleBottomSpacing;
    double  _headerTitleButtonAlignmentSpacing;
    UIFont * _headerTitleFont;
    double  _headerTitleLeadingSpacing;
    UIColor * _headerTitleOverBackgroundColor;
    UIColor * _headerTitleOverContentColor;
    double  _headerTitleTopSpacing;
    double  _interButtonSpacing;
    double  _interPageSpacing;
    double  _interSectionSpacing;
    bool  _isTV;
    long long  _scrollSnapBehavior;
    double  _scrollSnapMaximumAccelerationFactor;
    double  _scrollSnapMaximumDecelerationFactor;
    double  _squareContentVerticalPadding;
    bool  _wantsSectionsBlur;
    bool  _wantsShowAllButtonsInSectionFooters;
}

@property (nonatomic, readonly) bool allowsEmptyTitles;
@property (nonatomic, readonly) double aspectFitContentVerticalPadding;
@property (nonatomic, readonly) PXAssetsSectionLayoutSpec *assetsSpec;
@property (nonatomic, readonly) double backgroundGradientCornerRadius;
@property (nonatomic, readonly) PXExtendedImageConfiguration *backgroundGradientImageConfiguration;
@property (nonatomic, readonly) PXExtendedImageConfiguration *behindContentBackgroundGradientImageConfiguration;
@property (nonatomic, readonly) double endButtonSpacing;
@property (nonatomic, readonly) UIFont *headerSubtitleFont;
@property (nonatomic, readonly) double headerTitleBottomSpacing;
@property (nonatomic, readonly) double headerTitleButtonAlignmentSpacing;
@property (nonatomic, readonly) UIFont *headerTitleFont;
@property (nonatomic, readonly) double headerTitleLeadingSpacing;
@property (nonatomic, readonly) UIColor *headerTitleOverBackgroundColor;
@property (nonatomic, readonly) UIColor *headerTitleOverContentColor;
@property (nonatomic, readonly) double headerTitleTopSpacing;
@property (nonatomic, readonly) double interButtonSpacing;
@property (nonatomic, readonly) double interPageSpacing;
@property (nonatomic, readonly) double interSectionSpacing;
@property (nonatomic, readonly) bool isTV;
@property (nonatomic, readonly) long long scrollSnapBehavior;
@property (nonatomic, readonly) double scrollSnapMaximumAccelerationFactor;
@property (nonatomic, readonly) double scrollSnapMaximumDecelerationFactor;
@property (nonatomic, readonly) PXPhotosSectionHeaderLayoutSpec *sectionHeaderSpec;
@property (nonatomic, readonly) double squareContentVerticalPadding;
@property (nonatomic, readonly) NSString *visualEffectViewGroupName;
@property (nonatomic, readonly) bool wantsSectionsBlur;
@property (nonatomic, readonly) bool wantsShowAllButtonsInSectionFooters;

- (void).cxx_destruct;
- (bool)allowsEmptyTitles;
- (double)aspectFitContentVerticalPadding;
- (id)assetsSpec;
- (double)backgroundGradientCornerRadius;
- (id)backgroundGradientImageConfiguration;
- (id)behindContentBackgroundGradientImageConfiguration;
- (void)configureScrollSnapController:(id)arg1;
- (double)endButtonSpacing;
- (id)headerSubtitleFont;
- (double)headerTitleBottomSpacing;
- (double)headerTitleButtonAlignmentSpacing;
- (id)headerTitleFont;
- (double)headerTitleLeadingSpacing;
- (id)headerTitleOverBackgroundColor;
- (id)headerTitleOverContentColor;
- (double)headerTitleTopSpacing;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 gridStyle:(long long)arg3;
- (double)interButtonSpacing;
- (double)interPageSpacing;
- (double)interSectionSpacing;
- (bool)isTV;
- (long long)scrollSnapBehavior;
- (double)scrollSnapMaximumAccelerationFactor;
- (double)scrollSnapMaximumDecelerationFactor;
- (id)sectionHeaderSpec;
- (double)squareContentVerticalPadding;
- (id)visualEffectViewGroupName;
- (bool)wantsSectionsBlur;
- (bool)wantsShowAllButtonsInSectionFooters;

@end
