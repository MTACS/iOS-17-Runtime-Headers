
@interface BWFencedAnimationInfo : NSObject {
    long long  _fencePortGenerationCount;
    FigCaptureMachPortSendRight * _fencePortSendRight;
}

@property (readonly) long long fencePortGenerationCount;
@property (readonly) FigCaptureMachPortSendRight *fencePortSendRight;

- (void)dealloc;
- (id)description;
- (long long)fencePortGenerationCount;
- (id)fencePortSendRight;
- (id)initWithFencePortSendRight:(id)arg1;

@end
