
@interface PXMonthChapterSectionConfigurator : PXAssetsSectionConfigurator {
    PXMonthCardSectionBodyLayoutSpec * _cardBodySpec;
    PXCuratedLibraryChapterHeaderLayoutSpec * _chapterHeaderSpec;
}

@property (nonatomic, readonly) PXMonthCardSectionBodyLayoutSpec *cardBodySpec;
@property (nonatomic, readonly) PXCuratedLibraryChapterHeaderLayoutSpec *chapterHeaderSpec;

- (void).cxx_destruct;
- (id)cardBodySpec;
- (id)chapterHeaderSpec;
- (void)configureAssetSectionLayout:(id)arg1;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;

@end
