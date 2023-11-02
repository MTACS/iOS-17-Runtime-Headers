
@interface MLProbabilityDictionaryFloat64Storage : NSObject <MLProbabilityDictionaryStorage> {
    NSData * _data;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithFloat64CArray:(const double*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)maxElementIndex;
- (id)probabilityAtIndex:(unsigned long long)arg1;

@end
