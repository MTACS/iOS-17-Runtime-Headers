
@interface TFDataAggregator : NSObject {
    NSObject<OS_dispatch_queue> * _aggregationQueue;
    <TFDataAggregatorDelegate> * _delegate;
    TFFeedbackDataContainer * _sessionDataContainer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *aggregationQueue;
@property (nonatomic) <TFDataAggregatorDelegate> *delegate;
@property (nonatomic, readonly) TFFeedbackDataContainer *sessionDataContainer;

- (void).cxx_destruct;
- (void)_finishUpdatingDataContainer:(id)arg1 byMergingDataContainer:(id)arg2 forTasks:(id)arg3;
- (id)_loadAndExtractDataForTasks:(id)arg1 intoDataContainer:(id)arg2;
- (void)_prepareDestinationDataContainer:(id)arg1 forTasks:(id)arg2;
- (void)_validateProvidedIdentifiersForTasks:(id)arg1;
- (id)aggregationQueue;
- (id)delegate;
- (id)initWithSessionDataContainer:(id)arg1;
- (void)runTasks:(id)arg1;
- (id)sessionDataContainer;
- (void)setDelegate:(id)arg1;

@end
