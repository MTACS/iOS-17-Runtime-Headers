
@interface KVIncrementalDatasetStream : KVDatasetStream

- (bool)addOrUpdateItem:(id)arg1 error:(id*)arg2;
- (unsigned long long)priorVersion;
- (bool)removeItemWithItemId:(id)arg1 error:(id*)arg2;

@end
