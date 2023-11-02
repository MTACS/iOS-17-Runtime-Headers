
@interface NPTCDNDebugCollector : NSObject <NPTMetadataCollection> {
    NSURLSession * _session;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)collectorName;

- (void).cxx_destruct;
- (id)cachedMetadata;
- (id /* block */)metadataDidChangeHandler;
- (id)session;
- (void)setCachedMetadata:(id)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (void)stopCollecting;

@end
