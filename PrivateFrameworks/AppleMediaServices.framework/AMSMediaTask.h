
@interface AMSMediaTask : AMSTask <AMSBagConsumer> {
    bool  _URLKnownToBeTrusted;
    ACAccount * _account;
    NSArray * _additionalPlatforms;
    NSDictionary * _additionalQueryParams;
    <AMSBagProtocol> * _bag;
    NSArray * _bundleIdentifiers;
    bool  _charts;
    NSString * _clientIdentifier;
    AMSProcessInfo * _clientInfo;
    NSString * _clientVersion;
    NSDictionary * _filters;
    NSArray * _includedResultKeys;
    NSArray * _itemIdentifiers;
    NSString * _logKey;
    NSString * _searchTerm;
    long long  _type;
}

@property (nonatomic) bool URLKnownToBeTrusted;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSArray *additionalPlatforms;
@property (nonatomic, retain) NSDictionary *additionalQueryParams;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSArray *bundleIdentifiers;
@property (nonatomic) bool charts;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) NSString *clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *includedResultKeys;
@property (nonatomic, retain) NSArray *itemIdentifiers;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *searchTerm;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (bool)URLKnownToBeTrusted;
- (id)account;
- (id)additionalPlatforms;
- (id)additionalQueryParams;
- (id)bag;
- (id)bundleIdentifiers;
- (bool)charts;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)clientVersion;
- (id)filters;
- (id)includedResultKeys;
- (id)initWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 bag:(id)arg4;
- (id)itemIdentifiers;
- (id)logKey;
- (id)perform;
- (id)searchTerm;
- (void)setAccount:(id)arg1;
- (void)setAdditionalPlatforms:(id)arg1;
- (void)setAdditionalQueryParams:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setCharts:(bool)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setIncludedResultKeys:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setURLKnownToBeTrusted:(bool)arg1;
- (long long)type;

@end
