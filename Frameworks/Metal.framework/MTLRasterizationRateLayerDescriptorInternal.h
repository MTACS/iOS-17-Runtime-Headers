
@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _currentSampleCount;
    float * _data;
    MTLRasterizationRateSampleArrayInternal * _horizontal;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _size;
    MTLRasterizationRateSampleArrayInternal * _vertical;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)horizontal;
- (float*)horizontalSampleStorage;
- (id)init;
- (id)initWithSampleCount:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)initWithSampleCount:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3;
- (bool)isEqual:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxSampleCount;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })sampleCount;
- (void)setSampleCount:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)vertical;
- (float*)verticalSampleStorage;

@end
