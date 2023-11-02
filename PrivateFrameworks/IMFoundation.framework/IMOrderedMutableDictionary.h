
@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration> {
    NSMutableDictionary * _dictionary;
    NSMutableOrderedSet * _mutableOrderedSet;
    NSArray * _orderedItems;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (bool)containsKey:(id)arg1;
- (bool)containsOrderedObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)orderedObjectForKey:(id)arg1;
- (id)orderedObjects;
- (void)removeOrderedObjectForKey:(id)arg1;
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;

@end
