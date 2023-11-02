
@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination> {
    <_DKKnowledgeSaving> * _knowledgeStore;
    NSMutableArray * _matchers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_DKKnowledgeSaving> *knowledgeStore;
@property (nonatomic, readonly) NSMutableArray *matchers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCoreDuetDatasetSample:(id)arg1 toDataset:(id)arg2;
- (id)_datasetSampleFromEvent:(id)arg1 andMatcher:(id)arg2;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)knowledgeStore;
- (id)matchers;
- (void)processEvent:(id)arg1;
- (void)updateWithConfig:(id)arg1;

@end
