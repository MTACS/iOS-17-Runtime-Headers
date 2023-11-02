
@interface ODCurareCoreDuetStorage : NSObject {
    NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> * _knowledgeStore;
    NSString * _name;
    _DKEventStream * _stream;
}

@property (retain) NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *knowledgeStore;
@property (retain) NSString *name;
@property (retain) _DKEventStream *stream;

+ (id)predicateWithIdentifier:(id)arg1 withDate:(id)arg2;

- (void).cxx_destruct;
- (bool)deleteAllData;
- (bool)deleteData:(id /* block */)arg1;
- (bool)deleteDataWithPredicate:(id)arg1;
- (void)deleteDirectory:(id)arg1;
- (unsigned long long)deleteMultipleData:(id /* block */)arg1;
- (unsigned long long)deleteMultipleDataWithPredicate:(id)arg1;
- (id)init:(id)arg1;
- (id)knowledgeStore;
- (id)name;
- (id)queryDataWithPredicate:(id)arg1;
- (bool)saveDictionaries:(id)arg1 date:(id)arg2 eventIdentifier:(id)arg3;
- (bool)saveMetadata:(id)arg1 date:(id)arg2 eventIdentifier:(id)arg3;
- (void)setKnowledgeStore:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;

@end
