
@interface RMDSystemArc4RandomSource : RMDRandomSource

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;

@end
