
@interface HDIdentifierTable : NSObject {
    NSMapTable * _map;
    unsigned long long  _nextIdentifier;
}

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (id)objectWithIdentifier:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectWithIdentifier:(unsigned long long)arg1;

@end
