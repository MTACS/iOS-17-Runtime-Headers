
@interface MPStoreItemMetadataRequest : NSObject {
    bool  _allowLocalEquivalencies;
    NSString * _clientIdentifier;
    ICClientInfo * _clientInfo;
    ICUserIdentity * _delegatedUserIdentity;
    NSArray * _itemIdentifiers;
    long long  _personalizationStyle;
    NSString * _platform;
    unsigned long long  _reason;
    double  _retryDelay;
    bool  _shouldIgnoreCache;
    bool  _shouldIgnoreExpiration;
    bool  _shouldRequireCachedResults;
    NSNumber * _timeoutInterval;
    ICUserIdentity * _userIdentity;
    ICUserIdentityStore * _userIdentityStore;
}

@property (nonatomic) bool allowLocalEquivalencies;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) ICClientInfo *clientInfo;
@property (nonatomic, copy) ICUserIdentity *delegatedUserIdentity;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic) long long personalizationStyle;
@property (getter=isPersonalized, nonatomic, readonly) bool personalized;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) double retryDelay;
@property (nonatomic) bool shouldIgnoreCache;
@property (nonatomic) bool shouldIgnoreExpiration;
@property (nonatomic) bool shouldRequireCachedResults;
@property (nonatomic, readonly, copy) ICStorePlatformRequest *storePlatformRequest;
@property (nonatomic, copy) NSNumber *timeoutInterval;
@property (nonatomic, copy) ICUserIdentity *userIdentity;
@property (nonatomic, retain) ICUserIdentityStore *userIdentityStore;

- (void).cxx_destruct;
- (bool)allowLocalEquivalencies;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)delegatedUserIdentity;
- (id)init;
- (bool)isPersonalized;
- (id)itemIdentifiers;
- (long long)personalizationStyle;
- (id)platform;
- (unsigned long long)reason;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (double)retryDelay;
- (void)setAllowLocalEquivalencies:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegatedUserIdentity:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setPlatform:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setRetryDelay:(double)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setShouldIgnoreExpiration:(bool)arg1;
- (void)setShouldRequireCachedResults:(bool)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (void)setUserIdentityStore:(id)arg1;
- (bool)shouldIgnoreCache;
- (bool)shouldIgnoreExpiration;
- (bool)shouldRequireCachedResults;
- (id)storePlatformRequest;
- (id)timeoutInterval;
- (id)userIdentity;
- (id)userIdentityStore;

@end
