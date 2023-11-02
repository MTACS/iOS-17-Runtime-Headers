
@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary * _reasons;
    NSMutableDictionary * _records;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1;
- (id)rejectedDescriptions;
- (bool)rejectsTheSameRecordsAs:(id)arg1;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
