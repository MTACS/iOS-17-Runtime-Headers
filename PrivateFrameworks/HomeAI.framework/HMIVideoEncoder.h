
@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging> {
    <HMIVideoEncoderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _forceKeyFrameOnNextEncodedFrame;
    NSString * _logIdentifier;
    unsigned long long  _numberOfDroppedFrames;
    struct OpaqueVTCompressionSession { } * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) long long averageBitRate;
@property (nonatomic) struct HMIVideoEncoderDataRate { long long x1; long long x2; } dataRateLimit;
@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoEncoderDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expectedDuration;
@property (nonatomic) long long expectedFrameRate;
@property bool forceKeyFrameOnNextEncodedFrame;
@property (readonly) unsigned long long hash;
@property (retain) NSString *logIdentifier;
@property (nonatomic) long long maxFrameDelayCount;
@property (nonatomic) long long maxKeyFrameIntervalDuration;
@property (readonly) unsigned long long numberOfDroppedFrames;
@property (nonatomic) double quality;
@property struct OpaqueVTCompressionSession { }*session;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (int)_getFloat64Property:(struct __CFString { }*)arg1 propertyValueOut:(double*)arg2;
- (int)_getProperty:(struct __CFString { }*)arg1 propertyValue:(const void**)arg2;
- (int)_getSInt32Property:(struct __CFString { }*)arg1 propertyValueOut:(int*)arg2;
- (bool)_initSessionWithDimensions:(struct { int x1; int x2; })arg1 codecType:(unsigned int)arg2 useHardwareAcceleration:(bool)arg3 error:(id*)arg4;
- (void)_invalidate;
- (void)_invalidateWithErr:(int)arg1;
- (int)_setFloat64Property:(struct __CFString { }*)arg1 propertyValue:(double)arg2;
- (int)_setProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_setSInt32Property:(struct __CFString { }*)arg1 propertyValue:(int)arg2;
- (long long)averageBitRate;
- (struct HMIVideoEncoderDataRate { long long x1; long long x2; })dataRateLimit;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (double)expectedDuration;
- (long long)expectedFrameRate;
- (void)flush;
- (bool)forceKeyFrameOnNextEncodedFrame;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithDimensions:(struct { int x1; int x2; })arg1 codecType:(unsigned int)arg2 useHardwareAcceleration:(bool)arg3 error:(id*)arg4;
- (id)logIdentifier;
- (long long)maxFrameDelayCount;
- (long long)maxKeyFrameIntervalDuration;
- (unsigned long long)numberOfDroppedFrames;
- (bool)prepare;
- (double)quality;
- (struct OpaqueVTCompressionSession { }*)session;
- (void)setAverageBitRate:(long long)arg1;
- (void)setDataRateLimit:(struct HMIVideoEncoderDataRate { long long x1; long long x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setExpectedDuration:(double)arg1;
- (void)setExpectedFrameRate:(long long)arg1;
- (void)setForceKeyFrameOnNextEncodedFrame:(bool)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setMaxFrameDelayCount:(long long)arg1;
- (void)setMaxKeyFrameIntervalDuration:(long long)arg1;
- (void)setQuality:(double)arg1;
- (void)setSession:(struct OpaqueVTCompressionSession { }*)arg1;
- (id)workQueue;

@end
