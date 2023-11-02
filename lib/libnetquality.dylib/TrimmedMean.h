
@interface TrimmedMean : NSObject {
    unsigned long long  _arraySize;
    float  _currentAverage;
    float  _trimAt;
    NSMutableArray * _values;
}

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (float)getTrimmedMean;
- (id)initWithSize:(unsigned long long)arg1 withTrimAt:(float)arg2;

@end
