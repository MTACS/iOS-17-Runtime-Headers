
@interface SFShareSheetInvokedEvent : NSObject <SFCoreAnalyticsEvent> {
    NSString * _appBundleId;
    NSDictionary * _cacheAccessInfo;
    long long  _cacheFileCount;
    int  _daemonPID;
    long long  _durationInMS;
    bool  _isCollaborative;
    bool  _isDarkMode;
    long long  _numberOfSuggestions;
    NSString * _suggestionsHash;
    long long  _totalCacheAccessCount;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSDictionary *cacheAccessInfo;
@property (nonatomic) long long cacheFileCount;
@property (nonatomic) int daemonPID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long durationInMS;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCollaborative;
@property (nonatomic) bool isDarkMode;
@property (nonatomic) long long numberOfSuggestions;
@property (nonatomic, copy) NSString *suggestionsHash;
@property (readonly) Class superclass;
@property (nonatomic) long long totalCacheAccessCount;

+ (id)eventName;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)cacheAccessInfo;
- (long long)cacheFileCount;
- (int)daemonPID;
- (long long)durationInMS;
- (id)eventPayload;
- (bool)isCollaborative;
- (bool)isDarkMode;
- (long long)numberOfSuggestions;
- (void)setAppBundleId:(id)arg1;
- (void)setCacheAccessInfo:(id)arg1;
- (void)setCacheFileCount:(long long)arg1;
- (void)setDaemonPID:(int)arg1;
- (void)setDurationInMS:(long long)arg1;
- (void)setIsCollaborative:(bool)arg1;
- (void)setIsDarkMode:(bool)arg1;
- (void)setNumberOfSuggestions:(long long)arg1;
- (void)setSuggestionsHash:(id)arg1;
- (void)setTotalCacheAccessCount:(long long)arg1;
- (void)submitEvent;
- (id)suggestionsHash;
- (long long)totalCacheAccessCount;

@end
