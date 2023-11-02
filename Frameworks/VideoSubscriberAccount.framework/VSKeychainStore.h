
@interface VSKeychainStore : NSObject

- (bool)_fixUpdateConflictForItemWithAttributes:(id)arg1 andAttributesToUpdate:(id)arg2;
- (id)addItem:(id)arg1 error:(id*)arg2;
- (bool)deleteItemsMatchingQuery:(id)arg1 error:(id*)arg2;
- (id)findItemsMatchingQuery:(id)arg1 error:(id*)arg2;
- (bool)updateAttributes:(id)arg1 ofItemsMatchingQuery:(id)arg2 error:(id*)arg3;

@end
