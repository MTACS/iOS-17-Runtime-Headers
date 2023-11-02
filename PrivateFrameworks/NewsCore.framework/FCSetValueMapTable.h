
@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying> {
    FCMapTable * _backingMapTable;
}

@property (nonatomic, retain) FCMapTable *backingMapTable;

- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKey:(id)arg2;
- (id)backingMapTable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectsForKey:(id)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKey:(id)arg1;
- (void)setBackingMapTable:(id)arg1;

@end
