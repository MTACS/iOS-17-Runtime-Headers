
@interface PLSpotlightTranslatorConfiguration : NSObject {
    NSCalendar * _calendar;
    NSLocale * _locale;
    PLSearchIndexSceneTaxonomyProvider * _sceneTaxonomyProvider;
    NSDictionary * _seasonSynonymsBySeason;
    NSDictionary * _synonymsByIndexCategoryMask;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (nonatomic, readonly, copy) NSDictionary *seasonSynonymsBySeason;
@property (nonatomic, readonly, copy) NSDictionary *synonymsByIndexCategoryMask;

- (void).cxx_destruct;
- (id)calendar;
- (id)description;
- (id)initWithSceneTaxonomyProvider:(id)arg1 locale:(id)arg2 calendar:(id)arg3 seasonSynonyms:(id)arg4 synonymsByIndexCategoryMask:(id)arg5;
- (id)locale;
- (id)sceneTaxonomyProvider;
- (id)seasonSynonymsBySeason;
- (id)synonymsByIndexCategoryMask;

@end
