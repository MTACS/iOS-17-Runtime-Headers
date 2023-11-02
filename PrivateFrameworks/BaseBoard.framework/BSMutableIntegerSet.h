
@interface BSMutableIntegerSet : BSIntegerSet

- (bool)addValue:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllValues;
- (void)removeValue:(long long)arg1;
- (void)unionSet:(id)arg1;

@end
