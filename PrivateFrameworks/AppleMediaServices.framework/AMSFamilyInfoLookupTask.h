
@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _logKey;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logKey;
@property (readonly) Class superclass;

+ (id)_processURLResult:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (id)_currentCachedFamilyInfo;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2;
- (id)account;
- (id)bag;
- (id)fetchFamilyInfoLookupFromCache;
- (id)fetchFamilyInfoLookupFromServer;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)logKey;
- (id)performFamilyInfoLookup;
- (id)performFamilyInfoLookupWithCachePolicy:(long long)arg1;
- (void)setLogKey:(id)arg1;

@end
