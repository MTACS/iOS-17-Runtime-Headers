
@interface HMFOrderedDictionary : NSObject <HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSOrderedSet * _keys;
    NSArray * _objects;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) unsigned long long count;

+ (id)orderedDictionary;
+ (id)orderedDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initBySortingDictionary:(id)arg1;
- (id)initBySortingDictionary:(id)arg1 copyItems:(bool)arg2 keyComparator:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 copyObjects:(bool)arg3 copyKeys:(bool)arg4;
- (id)initWithObjects:(id)arg1 orderedKeySet:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableUnorderedCopy;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)unorderedCopy;

@end
