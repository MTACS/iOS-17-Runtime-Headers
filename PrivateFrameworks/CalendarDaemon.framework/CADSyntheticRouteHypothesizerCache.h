
@interface CADSyntheticRouteHypothesizerCache : NSObject {
    NSMutableDictionary * _eventExternalURLToSyntheticRouteHypothesizerMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (id)eventExternalURLToSyntheticRouteHypothesizerMap;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1;
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1;
- (id)workQueue;

@end
