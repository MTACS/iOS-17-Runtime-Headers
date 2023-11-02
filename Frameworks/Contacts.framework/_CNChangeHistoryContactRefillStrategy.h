
@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {
    CNContactStore * _contactStore;
    NSArray * _keys;
    bool  _unifyResults;
}

- (void).cxx_destruct;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)objectsRepresentedByBatch:(id)arg1;

@end
