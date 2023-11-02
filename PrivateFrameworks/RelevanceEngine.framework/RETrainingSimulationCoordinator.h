
@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface> {
    NSMapTable * _actionCompletionBlocks;
    NSMutableDictionary * _elementsAddedByEngine;
    bool  _isActivelyTraining;
    RETrainingSimulationServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isActivelyTraining;
@property (readonly) Class superclass;

+ (void)prewarm;

- (void).cxx_destruct;
- (void)_accesssEngineWithName:(id)arg1 completion:(id /* block */)arg2;
- (id)_engineWithName:(id)arg1;
- (id)_init;
- (void)_relevanceEnginesDidChange;
- (id)_unavailableEngineWithNameError:(id)arg1;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)dealloc;
- (void)elementAction:(id)arg1 didFinishTask:(bool)arg2;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (bool)isActivelyTraining;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsActivelyTraining:(bool)arg1;

@end
