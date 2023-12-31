
@interface AVFrameRateRange : NSObject {
    AVFrameRateRangeInternal * _internal;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property (readonly) double maxFrameRate;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property (readonly) double minFrameRate;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;
+ (void)initialize;

- (void)dealloc;
- (id)description;
- (bool)includesFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)includesFrameRate:(double)arg1;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)maxFrameRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (double)minFrameRate;

@end
