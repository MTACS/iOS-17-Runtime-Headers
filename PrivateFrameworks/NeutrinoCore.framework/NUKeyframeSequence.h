
@interface NUKeyframeSequence : NSObject {
    unsigned long long  _count;
    long long  _interpolation;
    bool  _ownsTimes;
    struct { long long x1; int x2; unsigned int x3; long long x4; } * _times;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long interpolation;

- (unsigned long long)count;
- (void)dealloc;
- (long long)indexOfKeyframeAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (id)initWithKeyframeSequence:(id)arg1;
- (void)interpolantAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)interpolation;
- (id)sparseSequence;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOfKeyframeAtIndex:(long long)arg1;

@end
