
@interface SSSectionBuilderHandler : NSObject {
    NSSet * _bundleIdentifiersForHiddenSections;
    SPSearchContactEntity * _contactEntity;
    SPSearchQueryContext * _queryContext;
    unsigned long long  _renderState;
    SPSearchEntity * _searchEntity;
    NSArray * _searchInAppInfo;
    NSArray * _sections;
}

@property (nonatomic, retain) NSSet *bundleIdentifiersForHiddenSections;
@property (nonatomic, retain) SPSearchContactEntity *contactEntity;
@property (nonatomic, retain) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;
@property (nonatomic, retain) SPSearchEntity *searchEntity;
@property (nonatomic, retain) NSArray *searchInAppInfo;
@property (nonatomic, retain) NSArray *sections;

+ (id)buildSectionsWithSections:(id)arg1 queryContext:(id)arg2 searchInAppInfo:(id)arg3 renderState:(unsigned long long)arg4;
+ (id)findDistinctPathIdentifiersForSections:(id)arg1;
+ (void)injectRecentsOptionsIntoResult:(id)arg1;
+ (bool)isZKWAutoShortcutBundle:(id)arg1;
+ (bool)isZKWRecentBundle:(id)arg1;
+ (id)makeClearProactiveCategoryButtonItemWithCategory:(int)arg1 shouldClearWholeSection:(bool)arg2 result:(id)arg3;
+ (Class)sectionBuilderClassForSection:(id)arg1 withQueryContext:(id)arg2;

- (void).cxx_destruct;
- (id)buildSections;
- (id)bundleIdentifiersForHiddenSections;
- (id)contactEntity;
- (void)insertDummySectionsIntoSections:(id)arg1;
- (id)queryContext;
- (unsigned long long)renderState;
- (id)searchEntity;
- (id)searchInAppInfo;
- (id)sections;
- (void)setBundleIdentifiersForHiddenSections:(id)arg1;
- (void)setContactEntity:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setRenderState:(unsigned long long)arg1;
- (void)setSearchEntity:(id)arg1;
- (void)setSearchInAppInfo:(id)arg1;
- (void)setSections:(id)arg1;

@end
