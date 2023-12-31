
@interface TSSMutablePropertySet : TSSPropertySet

- (void)addProperties:(id)arg1;
- (void)addProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
- (id)initWithPropertySet:(id)arg1;
- (void)intersectPropertySet:(id)arg1;
- (void)removeProperties:(id)arg1;
- (void)removeProperty:(int)arg1;

@end
