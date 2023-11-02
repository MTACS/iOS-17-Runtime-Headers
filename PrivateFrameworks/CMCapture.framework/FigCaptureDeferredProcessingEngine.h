
@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSSet * _allSensorIDStrings;
    FigCaptureDeferredTransactionBroker * _broker;
    bool  _currentDemosaicedRawEnabled;
    BWDeferredPipelineParameters * _currentPipelineParameters;
    NSString * _currentPortType;
    BWStillImageSettings * _currentSettings;
    NSDictionary * _defaultSensorIDsByPortType;
    BWMemoryPoolFlushAssertion * _flushAssertion;
    BWGraph * _graph;
    bool  _graphRunning;
    FigCaptureDeferredProcessingJob * _job;
    BWMemoryPool * _memoryPool;
    BWDeferredProcessingContainer * _prewarmedContainer;
    BWDeferredProcessingSourceNode * _sourceNode;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) FigCaptureDeferredTransactionBroker *broker;
@property (nonatomic, readonly) BWDeferredProcessingContainer *currentContainer;
@property (nonatomic, readonly) FigCaptureDeferredProcessingJob *currentJob;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedProcessingEngine;

- (id)broker;
- (id)currentContainer;
- (id)currentJob;
- (void)dealloc;
- (void)ensureGraphForSettings:(id)arg1 processingSettings:(id)arg2 applicationID:(id)arg3;
- (void)executeJob:(id)arg1;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (id)init;
- (void)releaseResources;

@end
