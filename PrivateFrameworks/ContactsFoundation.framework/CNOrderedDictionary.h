
@interface CNOrderedDictionary : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying> {
    NSMutableDictionary * _dictionary;
    NSMutableArray * _orderedKeys;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;

+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)forEach:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
