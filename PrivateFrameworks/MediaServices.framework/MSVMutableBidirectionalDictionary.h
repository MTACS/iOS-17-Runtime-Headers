
@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeAllObjects;
- (void)removeKeyForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setKey:(id)arg1 forObject:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
