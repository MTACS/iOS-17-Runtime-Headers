
@interface MADownloadOptions : NSObject <NSSecureCoding> {
    NSMutableDictionary * _additionalServerParams;
    bool  _allowDaemonConnectionRetries;
    bool  _allowsCellularAccess;
    bool  _allowsExpensiveAccess;
    NSDictionary * _analyticsData;
    bool  _canUseLocalCacheServer;
    NSData * _decryptionKey;
    bool  _disableUI;
    bool  _discretionary;
    NSString * _downloadAuthorizationHeader;
    bool  _liveServerCatalogOnly;
    bool  _liveServerCatalogOnlyIsOverridden;
    bool  _prefersInfraWiFi;
    bool  _requiresPowerPluggedIn;
    NSString * _sessionId;
    NSString * _sourceDirectory;
    long long  _timeoutIntervalForResource;
}

@property (nonatomic, retain) NSMutableDictionary *additionalServerParams;
@property (nonatomic) bool allowDaemonConnectionRetries;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) bool allowsExpensiveAccess;
@property (nonatomic, retain) NSDictionary *analyticsData;
@property (nonatomic) bool canUseLocalCacheServer;
@property (nonatomic, retain) NSData *decryptionKey;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic, retain) NSString *downloadAuthorizationHeader;
@property (nonatomic) bool liveServerCatalogOnly;
@property (nonatomic) bool liveServerCatalogOnlyIsOverridden;
@property (nonatomic) bool prefersInfraWiFi;
@property (nonatomic) bool requiresPowerPluggedIn;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) NSString *sourceDirectory;
@property (nonatomic) long long timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalServerParams;
- (bool)allowDaemonConnectionRetries;
- (bool)allowsCellularAccess;
- (bool)allowsExpensiveAccess;
- (id)analyticsData;
- (bool)canUseLocalCacheServer;
- (id)decryptionKey;
- (id)description;
- (bool)disableUI;
- (bool)discretionary;
- (id)downloadAuthorizationHeader;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (bool)liveServerCatalogOnly;
- (bool)liveServerCatalogOnlyIsOverridden;
- (void)logOptions;
- (bool)prefersInfraWiFi;
- (bool)requiresPowerPluggedIn;
- (id)sessionId;
- (void)setAdditionalServerParams:(id)arg1;
- (void)setAllowDaemonConnectionRetries:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsExpensiveAccess:(bool)arg1;
- (void)setAnalyticsData:(id)arg1;
- (void)setCanUseLocalCacheServer:(bool)arg1;
- (void)setDecryptionKey:(id)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadAuthorizationHeader:(id)arg1;
- (void)setLiveServerCatalogOnly:(bool)arg1;
- (void)setLiveServerCatalogOnlyIsOverridden:(bool)arg1;
- (void)setPrefersInfraWiFi:(bool)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSourceDirectory:(id)arg1;
- (void)setTimeoutIntervalForResource:(long long)arg1;
- (id)sourceDirectory;
- (id)tightSummaryIncludingAdditional:(bool)arg1;
- (long long)timeoutIntervalForResource;

@end
