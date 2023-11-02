
@interface SSSectionBuilder : NSObject {
    bool  _isTopHitSection;
    SPSearchQueryContext * _queryContext;
    unsigned long long  _renderState;
    SFMutableResultSection * _section;
}

@property (nonatomic) bool isTopHitSection;
@property (nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;
@property (nonatomic) SFMutableResultSection *section;

+ (id)detailedRowCardSectionForCardSection:(id)arg1;
+ (void)disambiguateUIIfNecessary:(id)arg1;
+ (id)searchInAppButtonItemWithCommand:(id)arg1;
+ (id)searchInAppButtonItemWithCommand:(id)arg1 title:(id)arg2;
+ (id)supportedBundleId;
+ (id)supportedBundleIds;
+ (bool)supportsSection:(id)arg1;
+ (id)visibleTextForCardSection:(id)arg1 includeDescriptions:(bool)arg2;

- (void).cxx_destruct;
- (id)buildBridgedResult;
- (id)buildButtonItem;
- (id)buildCardSectionWithResult:(id)arg1 resultBuilder:(id)arg2;
- (id)buildCardSections;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;
- (unsigned long long)buildMaxInitiallyVisibleResults;
- (id)buildSection;
- (id)buildTitle;
- (id)bundleId;
- (bool)hasEntities;
- (bool)isContactEntitySearch;
- (bool)isTopHitSection;
- (long long)maxCardSections;
- (id)queryContext;
- (unsigned long long)renderState;
- (id)section;
- (void)setIsTopHitSection:(bool)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setRenderState:(unsigned long long)arg1;
- (void)setSection:(id)arg1;
- (bool)shouldSkipSection;
- (bool)useHorizontallyScrollingCardSectionUI;

@end
