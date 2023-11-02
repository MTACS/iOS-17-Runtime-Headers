
@interface MLProbabilityDictionaryArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    NSArray * _array;
    unsigned long long  _count;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithArray:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)maxElementIndex;
- (id)probabilityAtIndex:(unsigned long long)arg1;

@end
