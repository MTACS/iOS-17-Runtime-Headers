
@interface UnsignedFixedIntervalMapper : HMMIntervalMapper {
    id /* block */  _comparisonBlock;
    id /* block */  _creationBlock;
    NSArray * _intervals;
}

@property (readonly) id /* block */ comparisonBlock;
@property (readonly) id /* block */ creationBlock;
@property (readonly) NSArray *intervals;

- (void).cxx_destruct;
- (id /* block */)comparisonBlock;
- (id /* block */)creationBlock;
- (id)initWithBins:(id)arg1 intervalCreationBlock:(id /* block */)arg2 valueComparisonBlock:(id /* block */)arg3;
- (id)intervalForValue:(unsigned long long)arg1;
- (id)intervalIndexForValue:(unsigned long long)arg1;
- (id)intervals;

@end
