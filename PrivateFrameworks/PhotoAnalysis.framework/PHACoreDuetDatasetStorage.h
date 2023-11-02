
@interface PHACoreDuetDatasetStorage : NSObject {
    <_DKKnowledgeSaving><_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (nonatomic, readonly) <_DKKnowledgeSaving><_DKKnowledgeQuerying> *knowledgeStore;

- (void).cxx_destruct;
- (id)_getEventStreamForDatasetName:(id)arg1;
- (void)addSample:(id)arg1 toDataset:(id)arg2;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (id)samplesForDataset:(id)arg1 subset:(id)arg2;

@end
