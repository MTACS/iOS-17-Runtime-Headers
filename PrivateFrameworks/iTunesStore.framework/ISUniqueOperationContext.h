
@interface ISUniqueOperationContext : NSObject {
    NSMutableSet * _operations;
    NSMutableDictionary * _uniqueOperations;
}

- (void)addOperation:(id)arg1;
- (bool)containsOperation:(id)arg1;
- (unsigned long long)countOfOperations;
- (void)dealloc;
- (id)init;
- (void)removeOperation:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (id)uniqueOperationForKey:(id)arg1;

@end
