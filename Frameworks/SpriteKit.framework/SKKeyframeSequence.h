
@interface SKKeyframeSequence : NSObject <NSCopying, NSSecureCoding> {
    struct SKCKeyframeSequence { int x1; int x2; long long x3; long long x4; float *x5; float *x6; } * _cKeyframeSequence;
    unsigned long long  _count;
    long long  _interpolationMode;
    long long  _repeatMode;
    NSMutableArray * _times;
    NSMutableArray * _values;
}

@property (nonatomic) long long interpolationMode;
@property (nonatomic) long long repeatMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct SKCKeyframeSequence { int x1; int x2; long long x3; long long x4; float *x5; float *x6; }*)_createSKCKeyframeSequence;
- (void)_dirtySKCKeyframeSequence;
- (Class)_valueClass;
- (void)addKeyframeValue:(id)arg1 time:(double)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (double)getKeyframeTimeForIndex:(unsigned long long)arg1;
- (id)getKeyframeValueForIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (long long)interpolationMode;
- (bool)isEqualToSequence:(id)arg1;
- (void)removeAllKeyframes;
- (void)removeKeyframeAtIndex:(unsigned long long)arg1;
- (void)removeLastKeyframe;
- (long long)repeatMode;
- (id)sampleAtTime:(double)arg1;
- (void)setInterpolationMode:(long long)arg1;
- (void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3;
- (void)setRepeatMode:(long long)arg1;

@end
