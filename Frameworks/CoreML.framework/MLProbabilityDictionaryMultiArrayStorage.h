
@interface MLProbabilityDictionaryMultiArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    unsigned long long  _count;
    MLMultiArray * _multiArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithMultiArray:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)maxElementIndex;
- (id)probabilityAtIndex:(unsigned long long)arg1;

@end
