
@interface _PSFamilyMLPredictionTask : NSObject {
    NSString * _directory;
    <_DKKnowledgeQuerying><_DKKnowledgeSaving> * _knowledgeStore;
}

@property (nonatomic, readonly, copy) NSString *directory;
@property (nonatomic, retain) <_DKKnowledgeQuerying><_DKKnowledgeSaving> *knowledgeStore;

- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)directory;
- (void)enumerateContactsInContactStoreUsingBlock:(id /* block */)arg1;
- (void)execute:(id)arg1;
- (id)knowledgeEventUsingPredictions:(id)arg1 familyRelations:(id)arg2;
- (id)knowledgeStore;
- (void)setKnowledgeStore:(id)arg1;

@end
