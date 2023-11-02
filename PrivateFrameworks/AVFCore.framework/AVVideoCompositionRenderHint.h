
@interface AVVideoCompositionRenderHint : NSObject {
    AVVideoCompositionRenderHintInternal * _internal;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } endCompositionTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startCompositionTime;

- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endCompositionTime;
- (id)initWithStartCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 subsequentStartCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 subsequentEndCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startCompositionTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })subsequentEndCompositionTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })subsequentStartCompositionTime;

@end
