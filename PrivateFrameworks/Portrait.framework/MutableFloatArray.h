
@interface MutableFloatArray : FloatArray {
    unsigned long long  _capacity;
    float * _start;
}

@property (nonatomic, readonly) float*mutableFloats;

- (void)addConstant:(float)arg1;
- (void)appendFloat:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)floatAtIndex:(unsigned long long)arg1;
- (const float*)floats;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithCount:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithFloat:(float)arg1 repeatCount:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithZeros:(unsigned long long)arg1;
- (id)initWithZeros:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (float*)mutableFloats;
- (void)removeFromStart:(unsigned long long)arg1;
- (void)setFloat:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)setFloat:(float)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFloats:(const float*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
