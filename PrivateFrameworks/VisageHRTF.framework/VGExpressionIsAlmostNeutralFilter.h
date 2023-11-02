
@interface VGExpressionIsAlmostNeutralFilter : VGExpressionFilter {
    float  _lowerBound;
    float  _upperBound;
}

- (float)filter:(id)arg1;
- (id)initWithLowerBound:(float)arg1 withUpperBound:(float)arg2;

@end
