
@interface AMSEngagementClientData : NSObject {
    NSMutableDictionary * _apps;
    NSString * _lastSyncedBuild;
}

@property (nonatomic, retain) NSMutableDictionary *apps;
@property (nonatomic, retain) NSString *lastSyncedBuild;

+ (void)_assertEngagementd;
+ (id)_fetchClientData;
+ (bool)_isDaemon;
+ (void)_registerNotifications;
+ (id)_sharedQueue;
+ (id)clientDataURL;
+ (void)erase;
+ (id)loadFromDisk;

- (void).cxx_destruct;
- (id)_appForIdentifier:(id)arg1;
- (void)_enumerateAppsWithBlock:(id /* block */)arg1;
- (void)_setApp:(id)arg1 forIdentifier:(id)arg2;
- (void)addCachedResponseData:(id)arg1 cacheInfo:(id)arg2 appIdentifier:(id)arg3;
- (id)apps;
- (id)cachedResponseDataForEvent:(id)arg1;
- (id)destinationsForEvent:(id)arg1;
- (id)initWithCacheObject:(id)arg1;
- (id)lastSyncedBuild;
- (void)saveToDisk;
- (void)setAllowedEvents:(id)arg1 appIdentifier:(id)arg2;
- (void)setApps:(id)arg1;
- (void)setLastSyncedBuild:(id)arg1;

@end
