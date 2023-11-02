
@interface NPTAWDLCollector : NSObject <NPTMetadataCollection> {
    CWFInterface * _interface;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CWFInterface *interface;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (readonly) Class superclass;

+ (id)collectorName;

- (void).cxx_destruct;
- (id)awdlOpModeString;
- (id)cachedMetadata;
- (id)fetchAWDLData;
- (id)interface;
- (id /* block */)metadataDidChangeHandler;
- (void)setCachedMetadata:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (void)stopCollecting;

@end
