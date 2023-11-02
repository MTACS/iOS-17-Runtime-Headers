
@interface FloatArray : NSObject <NSCopying, NSMutableCopying> {
    float * _buffer;
    unsigned long long  _count;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const float*floats;

- (id)addingConstant:(float)arg1;
- (unsigned long long)argMinimum;
- (id)asArray;
- (id)asData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (float)floatAtIndex:(unsigned long long)arg1;
- (const float*)floats;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFloat:(float)arg1 repeatCount:(unsigned long long)arg2;
- (id)initWithFloatArray:(id)arg1;
- (id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2;
- (id)initWithZeros:(unsigned long long)arg1;
- (bool)isEqualToFloatArray:(id)arg1;
- (bool)isEqualToFloatArray:(id)arg1 tolerance:(float)arg2;
- (float)maximumDifferenceWithFloatArray:(id)arg1;
- (float)mean;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)subtracting:(id)arg1;

@end
