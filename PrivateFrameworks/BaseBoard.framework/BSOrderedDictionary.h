
@interface BSOrderedDictionary : NSObject <BSDescriptionStreamable, BSStandardCollection, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding> {
    BSOrderedDictionaryKeyStrategy * _keyOrderingStrategy;
    NSArray * _keys;
    NSDictionary * _values;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initTabulaRasa;
- (id)allKeys;
- (id)allValues;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithIndexesUsingBlock:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 keyOrderingStrategy:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)sortedDictionaryUsingComparator:(id /* block */)arg1;
- (id)subdictionaryWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)unorderedDictionary;

@end
