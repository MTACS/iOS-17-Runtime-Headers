
@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray * mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollection:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
