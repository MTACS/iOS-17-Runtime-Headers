
@interface NPTSystemCollector : NSObject <NPTMetadataCollection> {
    W5Client * _client;
    NSArray * _eventsToMonitor;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (retain) NSMutableDictionary *cachedMetadata;
@property (nonatomic, retain) W5Client *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *eventsToMonitor;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (readonly) Class superclass;

+ (id)collectorName;

- (void).cxx_destruct;
- (id)cachedMetadata;
- (id)client;
- (id)eventsToMonitor;
- (id)fetchDeviceData;
- (id /* block */)metadataDidChangeHandler;
- (void)setCachedMetadata:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setEventsToMonitor:(id)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (void)stopCollecting;

@end
