
@interface CDMServiceGraph : NSObject {
    NSLock * _aneLock;
    CDMDataDispatcherContext * _cdmDataDispatcherContext;
    CDMServiceGraphNode * _endNode;
    NSError * _error;
    id  _graphInput;
    id  _graphOutput;
    NSString * _handlerId;
    NSString * _language;
    NSMutableArray * _nodes;
    NSMutableDictionary * _nodesWithName;
    NSMutableDictionary * _serviceMap;
    NSMutableArray * _serviceMetrics;
    NSMutableDictionary * _skipNodes;
}

@property (nonatomic, retain) CDMDataDispatcherContext *cdmDataDispatcherContext;
@property (nonatomic, retain) NSError *error;
@property (retain) NSMutableArray *serviceMetrics;

+ (void)dispatchServiceGraphHandleMetricsLogging:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (void)dispatchServiceGraphRequestLogging:(id)arg1 dataDispatcherContext:(id)arg2;
+ (void)dispatchServiceGraphResponseLogging:(id)arg1 requestId:(id)arg2 dataDispatcherContext:(id)arg3;
+ (int)getCdmRequesterWithConnectionId:(id)arg1;
+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requestFeatureStoreStreamId;
+ (id)requiredDAGServices;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithRequestCmd:(id)arg1;
+ (id)serializeFeatureStoreWithResponseCmd:(id)arg1;
+ (bool)shouldSkipNode:(id)arg1 service:(id)arg2;

- (void).cxx_destruct;
- (id)addNodeWithName:(id)arg1 aneEnabled:(bool)arg2 requestId:(id)arg3 block:(id /* block */)arg4;
- (id)addNodeWithName:(id)arg1 bindService:(id)arg2 aneEnabled:(bool)arg3 requestId:(id)arg4 block:(id /* block */)arg5;
- (id)addNodeWithName:(id)arg1 bindService:(id)arg2 requestId:(id)arg3 block:(id /* block */)arg4;
- (id)addNodeWithName:(id)arg1 requestId:(id)arg2 block:(id /* block */)arg3;
- (void)buildGraph;
- (void)buildGraphInternal;
- (id)cdmDataDispatcherContext;
- (id)error;
- (void)failedWithError:(id)arg1;
- (void)failedWithErrorCode:(long long)arg1 errorDomain:(id)arg2 message:(id)arg3;
- (id)getEndNode;
- (id)getError;
- (id)getGraphInput;
- (id)getGraphOutput;
- (id)getHandlerId;
- (id)getLanguage;
- (id)getNodes;
- (id)getNodesWithName;
- (id)getServiceByClass:(Class)arg1;
- (id)getSkippedNodes;
- (id)init;
- (id)initWithServices:(id)arg1 graphInput:(id)arg2 languageCode:(id)arg3 handlerId:(id)arg4 aneLock:(id)arg5 dataDispatcherContext:(id)arg6;
- (bool)isAcyclic;
- (void)populateRequesterEnumForNluRequest:(id)arg1;
- (id)serviceMetrics;
- (void)setCdmDataDispatcherContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGraphOutput:(id)arg1;
- (void)setServiceMetrics:(id)arg1;
- (void)skipNode:(id)arg1 basedOnNode:(id)arg2 withCondition:(id /* block */)arg3;
- (Class)supportedGraphInputType;
- (id)toMermaid;
- (id)topoSort;
- (id)validateRequest:(id)arg1;

@end
