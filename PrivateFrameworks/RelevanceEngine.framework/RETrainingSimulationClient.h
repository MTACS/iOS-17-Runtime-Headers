
@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface> {
    NSXPCConnection * _connection;
    <RETrainingSimulationClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _targetProcessName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <RETrainingSimulationClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetProcessName;

- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (id)availableRelevanceEngines;
- (void)availableRelevanceEnginesDidChange;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticLogFileForRelevanceEngine:(id)arg1;
- (id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1;
- (id)fetchAllElementsInRelevanceEngine:(id)arg1;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (id)initWithTargetProcessName:(id)arg1 delegate:(id)arg2;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2;
- (id)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2;
- (bool)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3;
- (bool)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2;
- (id)targetProcessName;

@end
