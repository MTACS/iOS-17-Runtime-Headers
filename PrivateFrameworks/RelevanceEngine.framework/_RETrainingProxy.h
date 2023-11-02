
@interface _RETrainingProxy : NSObject <RETrainingSimulationClientDelegate, RETrainingSimulationServerInterface> {
    RETrainingSimulationClient * _client;
    RETrainingSimulationServer * _server;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RETrainingSimulationServer *server;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithServiceName:(id)arg1;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;
- (id)server;
- (id)serviceName;

@end
