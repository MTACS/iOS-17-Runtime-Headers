
@interface MTLRasterizationRateSampleArrayInternal : MTLRasterizationRateSampleArray {
    unsigned long long  _count;
    float * _data;
}

- (float*)__getRawArray:(unsigned long long*)arg1;
- (id)initWithData:(float*)arg1 numElements:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
