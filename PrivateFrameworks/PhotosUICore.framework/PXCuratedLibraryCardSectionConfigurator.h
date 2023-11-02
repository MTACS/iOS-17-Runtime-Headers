
@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator {
    PXCuratedLibraryCardSectionBodyLayoutSpec * _cardSpec;
}

@property (nonatomic, readonly) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec;

- (void).cxx_destruct;
- (id)cardSpec;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerInsets;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end
