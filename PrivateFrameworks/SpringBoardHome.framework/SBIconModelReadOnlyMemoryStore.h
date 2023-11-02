
@interface SBIconModelReadOnlyMemoryStore : SBIconModelMemoryStore

- (bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)saveCurrentIconState:(id)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;

@end
