
@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _backingDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *backingDictionary;

- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKey:(id)arg2;
- (id)backingDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectsForKey:(id)arg1;
- (void)removeObjectsForKey:(id)arg1;
- (void)setBackingDictionary:(id)arg1;

@end
