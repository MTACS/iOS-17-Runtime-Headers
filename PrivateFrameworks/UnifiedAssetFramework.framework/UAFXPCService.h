
@interface UAFXPCService : NSObject <NSXPCListenerDelegate, UAFXPCProxyService> {
    UAFAssetUtilitiesService * _assetUtilitiesService;
    bool  _assistantEnabled;
    bool  _dictationEnabled;
    NSString * _languageCode;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscriptions;
    NSString * _systemLanguageCode;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isAssistantEnabled;
+ (bool)_isDictationEnabled;
+ (id)_systemLanguageLocale;

- (void).cxx_destruct;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesUpdate;
- (void)_invalidate;
- (void)_systemLanguageUpdate;
- (oneway void)checkAssetStatus:(id /* block */)arg1;
- (void)dealloc;
- (oneway void)diagnosticInformation:(id /* block */)arg1;
- (oneway void)downloadDictationAssetsForLanguage:(id)arg1;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)downloadSizeInBytesForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithXPCListener:(id)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)operationWithConfig:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)arg1;
- (void)start;
- (void)startAsync;
- (void)stop;
- (void)stopAsync;
- (void)subscribeWithConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribeWithConfig:(id)arg1 completion:(id /* block */)arg2;

@end
