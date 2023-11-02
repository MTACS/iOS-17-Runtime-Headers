
@interface SSSearchInAppSectionBuilder : SSSectionBuilder {
    NSSet * _bundleIdentifiersForHiddenSections;
    NSArray * _searchInAppInfo;
}

@property (nonatomic, retain) NSSet *bundleIdentifiersForHiddenSections;
@property (nonatomic, retain) NSArray *searchInAppInfo;

+ (id)supportedBundleId;

- (void).cxx_destruct;
- (id)buildSection;
- (id)bundleIdentifiersForHiddenSections;
- (id)searchInAppInfo;
- (void)setBundleIdentifiersForHiddenSections:(id)arg1;
- (void)setSearchInAppInfo:(id)arg1;
- (bool)shouldSkipSection;

@end
