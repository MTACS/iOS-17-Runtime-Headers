
@interface SBCountedMap : NSObject {
    NSCountedSet * _countedKeys;
    NSMutableDictionary * _map;
}

- (void).cxx_destruct;
- (bool)checkinValue:(id)arg1;
- (void)checkinValues:(id)arg1;
- (id)checkoutValueForKey:(id)arg1 creationBlock:(id /* block */)arg2;
- (bool)containsKey:(id)arg1;
- (bool)containsValue:(id)arg1;
- (id)description;
- (id)init;

@end
