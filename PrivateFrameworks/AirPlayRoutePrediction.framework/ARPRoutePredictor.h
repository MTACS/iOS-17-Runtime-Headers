
@interface ARPRoutePredictor : NSObject {
    NSString * _file;
    bool  _hasLoadedMicroLocation;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSSet * _knownOutputDeviceIDs;
    _DKEvent * _latestMicroLocationEvent;
    id /* block */  _longFormVideoFilter;
    double  _microLocationSimilarityThreshold;
    NSObject<OS_dispatch_queue> * _queue;
    double  _routingSessionTimeout;
    NSArray * _sessions;
    int  _token;
}

@property (nonatomic, readonly, copy) NSString *file;
@property bool hasLoadedMicroLocation;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (retain) NSSet *knownOutputDeviceIDs;
@property (retain) _DKEvent *latestMicroLocationEvent;
@property (nonatomic, copy) id /* block */ longFormVideoFilter;
@property (nonatomic, readonly) double microLocationSimilarityThreshold;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property double routingSessionTimeout;
@property (retain) NSArray *sessions;
@property (nonatomic, readonly) int token;

+ (id)defaultFile;
+ (double)defaultMicroLocationSimilarityThreshold;
+ (id)routePredictor;

- (void).cxx_destruct;
- (void)_reloadLatestMicroLocationEvent;
- (void)_reloadPersistedSessions;
- (void)dealloc;
- (id)description;
- (id)file;
- (bool)hasLoadedMicroLocation;
- (id)initWithmicroLocationSimilarityThreshold:(double)arg1 file:(id)arg2 knowledgeStore:(id)arg3;
- (id)knowledgeStore;
- (id)knownOutputDeviceIDs;
- (id)latestMicroLocationEvent;
- (id /* block */)longFormVideoFilter;
- (double)microLocationSimilarityThreshold;
- (id)predictionsForContext:(id)arg1;
- (id)predictionsForCurrentContext;
- (id)predictionsWithCurrentContext:(id*)arg1;
- (id)queue;
- (double)routingSessionTimeout;
- (id)sessions;
- (void)setHasLoadedMicroLocation:(bool)arg1;
- (void)setKnownOutputDeviceIDs:(id)arg1;
- (void)setLatestMicroLocationEvent:(id)arg1;
- (void)setLongFormVideoFilter:(id /* block */)arg1;
- (void)setRoutingSessionTimeout:(double)arg1;
- (void)setSessions:(id)arg1;
- (int)token;

@end
