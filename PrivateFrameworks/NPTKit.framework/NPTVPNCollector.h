
@interface NPTVPNCollector : NSObject <NPTMetadataCollection> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NEConfiguration * _config;
    NEConfigurationManager * _configManager;
    NSArray * _eventsToMonitor;
    NEVPNManager * _manager;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (retain) NEConfiguration *config;
@property (retain) NEConfigurationManager *configManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *eventsToMonitor;
@property (readonly) unsigned long long hash;
@property (retain) NEVPNManager *manager;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (readonly) Class superclass;

+ (id)collectorName;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (id)cachedMetadata;
- (void)collectVPNAddressesWithCompletion:(id /* block */)arg1;
- (id)config;
- (id)configManager;
- (id)eventsToMonitor;
- (void)getExtendedStatus:(int)arg1 session:(void*)arg2 completionHandler:(id /* block */)arg3;
- (id)getVPNStatusAsString:(long long)arg1;
- (id)manager;
- (id /* block */)metadataDidChangeHandler;
- (void)setBackgroundQueue:(id)arg1;
- (void)setCachedMetadata:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setConfigManager:(id)arg1;
- (void)setEventsToMonitor:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (void)stopCollecting;
- (void)vpnNotificationReceived:(id)arg1;

@end
