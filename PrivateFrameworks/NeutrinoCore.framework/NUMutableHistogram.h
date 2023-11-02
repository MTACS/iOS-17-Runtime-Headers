
@interface NUMutableHistogram : NUHistogram

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)increment:(long long)arg1;
- (void)observeValue:(double)arg1;
- (void)observeValuesInDataSet:(id)arg1;
- (void)smoothWithFunction:(long long)arg1 windowSize:(long long)arg2 sampleMode:(long long)arg3;
- (void)write:(id /* block */)arg1;

@end
