
@interface SearchUIAppTopHitAsyncSectionLoader : SearchUIAsyncSectionLoader {
    SFAppIconCardSection * _appIconCardSection;
}

@property (nonatomic, retain) SFAppIconCardSection *appIconCardSection;

+ (long long)maxNumOfTopHitEntities;
+ (bool)supportsSectionModel:(id)arg1;

- (void).cxx_destruct;
- (id)appIconCardSection;
- (id)backgroundColor;
- (id)buildVerticalLayoutCardSectionFromResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 command:(id)arg4;
- (id)bundleIdentifier;
- (id)cacheIdentifier;
- (id)cardSections;
- (bool)expectsSubtitle;
- (id)initWithSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (id)placeholderCardSections;
- (id)responseForCardSections:(id)arg1 animated:(bool)arg2;
- (void)setAppIconCardSection:(id)arg1;

@end
