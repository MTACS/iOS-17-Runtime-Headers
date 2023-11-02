
@interface BMCoreDuetMediaUsageStore : NSObject <BMCoreDuetMediaUsageStore> {
    _CDClientContext * _contextStore;
    <_DKKnowledgeSaving> * _knowledgeStore;
}

@property (nonatomic, readonly) _CDClientContext *contextStore;
@property (nonatomic, readonly) <_DKKnowledgeSaving> *knowledgeStore;

- (void).cxx_destruct;
- (bool)addContextValue:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)contextStore;
- (id)init;
- (id)knowledgeStore;
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (bool)saveKnowledgeEvent:(id)arg1 error:(id*)arg2;

@end
