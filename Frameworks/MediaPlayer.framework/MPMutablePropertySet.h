
@interface MPMutablePropertySet : MPPropertySet

+ (id)new;

- (void)addProperty:(id)arg1;
- (void)addRelationship:(id)arg1 properties:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (void)removeProperty:(id)arg1;
- (void)removeRelationship:(id)arg1;

@end
