
@interface AMSMediaTaskURLBuilder : NSObject {
    NSArray * _additionalPlatforms;
    NSDictionary * _additionalQueryParams;
    <AMSBagProtocol> * _bag;
    NSArray * _bundleIdentifiers;
    bool  _charts;
    NSString * _clientVersion;
    AMSMediaTaskTypeConfig * _config;
    NSDictionary * _filters;
    NSArray * _includedResultKeys;
    NSArray * _itemIdentifiers;
    NSString * _logKey;
    NSString * _searchTerm;
}

@property (nonatomic, retain) NSArray *additionalPlatforms;
@property (nonatomic, retain) NSDictionary *additionalQueryParams;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSArray *bundleIdentifiers;
@property (nonatomic) bool charts;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) AMSMediaTaskTypeConfig *config;
@property (nonatomic, retain) NSDictionary *filters;
@property (nonatomic, retain) NSArray *includedResultKeys;
@property (nonatomic, retain) NSArray *itemIdentifiers;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *searchTerm;

- (void).cxx_destruct;
- (void)_addBundleIdentifiers:(id)arg1;
- (void)_addCharts:(id)arg1;
- (void)_addItemIdentifiers:(id)arg1;
- (void)_addSearchTerm:(id)arg1;
- (id)_devicePlatform;
- (id)_hostPromise;
- (id)_languagePromise;
- (id)_pathPromise;
- (id)_queryItemsWithLanguage:(id)arg1;
- (id)_verifyConfiguration;
- (id)additionalPlatforms;
- (id)additionalQueryParams;
- (id)bag;
- (id)build;
- (id)bundleIdentifiers;
- (bool)charts;
- (id)clientVersion;
- (id)config;
- (id)filters;
- (id)includedResultKeys;
- (id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;
- (id)itemIdentifiers;
- (id)logKey;
- (id)searchTerm;
- (void)setAdditionalPlatforms:(id)arg1;
- (void)setAdditionalQueryParams:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setCharts:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setIncludedResultKeys:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setSearchTerm:(id)arg1;

@end
