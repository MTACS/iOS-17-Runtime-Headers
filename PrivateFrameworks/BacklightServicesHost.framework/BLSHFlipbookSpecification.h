
@interface BLSHFlipbookSpecification : NSObject {
    double  _coaelscingEpsilon;
    long long  _frameCapacity;
    double  _framesPerSecond;
    double  _maximumRenderInterval;
    double  _minimumGapDuration;
    double  _minimumPrepareInterval;
    unsigned long long  _softMemoryLimit;
}

@property (nonatomic, readonly) double coaelscingEpsilon;
@property (nonatomic, readonly) long long frameCapacity;
@property (nonatomic, readonly) double framesPerSecond;
@property (nonatomic, readonly) double maximumRenderInterval;
@property (nonatomic, readonly) double minimumGapDuration;
@property (nonatomic, readonly) double minimumPrepareInterval;
@property (nonatomic, readonly) unsigned long long softMemoryLimit;

- (double)coaelscingEpsilon;
- (id)description;
- (long long)frameCapacity;
- (double)framesPerSecond;
- (id)initWithFrameCapacity:(unsigned long long)arg1 framesPerSecond:(double)arg2 minimumGapDuration:(double)arg3 coaelscingEpsilon:(double)arg4 minimumPrepareInterval:(double)arg5 maximumRenderInterval:(double)arg6;
- (id)initWithSoftMemoryLimit:(unsigned long long)arg1 frameCapacity:(long long)arg2 framesPerSecond:(double)arg3 minimumGapDuration:(double)arg4 coaelscingEpsilon:(double)arg5 minimumPrepareInterval:(double)arg6 maximumRenderInterval:(double)arg7;
- (double)maximumRenderInterval;
- (double)minimumGapDuration;
- (double)minimumPrepareInterval;
- (unsigned long long)softMemoryLimit;

@end
