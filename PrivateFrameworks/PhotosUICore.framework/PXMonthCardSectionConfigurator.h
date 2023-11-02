
@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXMonthsAssetsSectionHeaderLayoutSpec * _floatingHeaderSpec;
}

+ (long long)zoomLevel;

- (void).cxx_destruct;
- (void)configureAssetSectionLayout:(id)arg1;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end
