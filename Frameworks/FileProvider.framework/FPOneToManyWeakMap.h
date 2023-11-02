
@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary * _backingDictionary;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)anyObjectForKey:(id)arg1;
- (id)init;
- (id)removeObject:(id)arg1;
- (void)removeObjectsForKey:(id)arg1;

@end
