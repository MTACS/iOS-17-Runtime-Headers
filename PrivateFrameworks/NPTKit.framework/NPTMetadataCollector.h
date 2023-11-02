
@interface NPTMetadataCollector : NSObject <NPTMetadataCollection> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSMutableArray * _collectors;
    CWFInterface * _interface;
    bool  _isCollectingMetadata;
    id /* block */  _metadataDidChangeHandlerForCollectors;
    NSDate * _startDate;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (nonatomic, retain) NSMutableArray *collectors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CWFInterface *interface;
@property bool isCollectingMetadata;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (nonatomic, copy) id /* block */ metadataDidChangeHandlerForCollectors;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)collectorName;
+ (id)fetch;
+ (id)fetchCellularData;
+ (id)fetchDeviceData;
+ (id)fetchWRMMetrics;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (id)cachedMetadata;
- (id)collectors;
- (id)init;
- (id)initWithCollectorTypes:(id)arg1;
- (id)interface;
- (bool)isCollectingMetadata;
- (bool)knownCollectionType:(Class)arg1;
- (id /* block */)metadataDidChangeHandler;
- (id /* block */)metadataDidChangeHandlerForCollectors;
- (void)setBackgroundQueue:(id)arg1;
- (void)setCachedMetadata:(id)arg1;
- (void)setCollectors:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setIsCollectingMetadata:(bool)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)setMetadataDidChangeHandlerForCollectors:(id /* block */)arg1;
- (void)setStartDate:(id)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (id)startDate;
- (void)stopCollecting;

@end
