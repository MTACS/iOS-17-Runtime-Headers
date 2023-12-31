
@interface CPMLNaiveBayesStorageManager : CPMLStorageManager

- (double)getCountAndSetYCardinality:(double*)arg1;
- (double)getCountXGivenYAndSetXCardinality:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withCardinalityX:(double*)arg4;
- (double)getCountY:(unsigned long long)arg1;
- (void)setCardinalityXGivenY:(unsigned long long)arg1 withY:(unsigned long long)arg2 cardinalityValue:(double)arg3;
- (void)setCountXGivenY:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withValue:(double)arg4;
- (void)setCountY:(double)arg1;
- (void)setCountY:(unsigned long long)arg1 withCount:(double)arg2;

@end
