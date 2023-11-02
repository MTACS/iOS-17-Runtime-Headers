
@interface FCCKContentDatabase : NSObject {
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _containerIdentifier;
    bool  _isProductionEnvironment;
    double  _maximumRetryAfterForCK;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    bool  _shouldBypassCDNForCKAssetURLs;
    bool  _shouldUseCloudd;
    bool  _shouldUseSecureConnectionForCKAssetURLs;
}

@property (nonatomic, readonly, copy) NSURL *baseURLForEdgeCachedMultiFetch;
@property (nonatomic, readonly, copy) NSURL *baseURLForEdgeCachedOrderFeed;
@property (nonatomic, readonly, copy) NSURL *baseURLForMultiFetch;
@property (nonatomic, readonly, copy) NSURL *baseURLForOrderFeed;
@property (nonatomic, readonly, copy) NSURL *baseURLForRecordFetch;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly) bool isProductionEnvironment;
@property (nonatomic) double maximumRetryAfterForCK;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic) bool shouldBypassCDNForCKAssetURLs;
@property (nonatomic, readonly) bool shouldUseCloudd;
@property (nonatomic) bool shouldUseSecureConnectionForCKAssetURLs;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)baseURLForEdgeCachedMultiFetch;
- (id)baseURLForEdgeCachedOrderFeed;
- (id)baseURLForMultiFetch;
- (id)baseURLForOrderFeed;
- (id)baseURLForRecordFetch;
- (id)configurationManager;
- (id)containerIdentifier;
- (id)init;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(bool)arg2 networkBehaviorMonitor:(id)arg3 configurationManager:(id)arg4;
- (bool)isProductionEnvironment;
- (double)maximumRetryAfterForCK;
- (id)networkBehaviorMonitor;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(bool)arg3;
- (void)setMaximumRetryAfterForCK:(double)arg1;
- (void)setShouldBypassCDNForCKAssetURLs:(bool)arg1;
- (void)setShouldUseSecureConnectionForCKAssetURLs:(bool)arg1;
- (bool)shouldBypassCDNForCKAssetURLs;
- (bool)shouldUseCloudd;
- (bool)shouldUseSecureConnectionForCKAssetURLs;
- (void)updateAssetURLHostIfNeededWithComponents:(id)arg1;

@end
