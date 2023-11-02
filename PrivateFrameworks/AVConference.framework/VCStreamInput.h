
@interface VCStreamInput : VCObject <VCStreamInputCaptureSourceDelegate> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    double  _estimatedJitter;
    struct opaqueCMFormatDescription { } * _format;
    bool  _isStarted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAveragedTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastBufferTime;
    double  _lastTransitTime;
    struct opaqueVCRemoteImageQueue { } * _receiverQueue;
    _Atomic unsigned int  _sampleBufferCount;
    int (* _sampleBufferHandler;
    NSNumber * _streamInputID;
    NSObject<OS_dispatch_queue> * _streamInputQueue;
    <VCStreamInputDelegate> * _strongDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStarted;
@property (readonly) NSDictionary *reportingStats;
@property (nonatomic, readonly) NSNumber *streamInputID;
@property (readonly) Class superclass;

- (bool)createRemoteReceiveQueue:(id)arg1;
- (void)dealloc;
- (void)didResumeStreamInputCaptureSource;
- (void)didStartStreamInputCaptureSource;
- (void)didStopStreamInputCaptureSource;
- (void)didSuspendStreamInputCaptureSource;
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;
- (void)invalidate;
- (bool)isEqualFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)isStarted;
- (id)reportingStats;
- (struct opaqueCMFormatDescription { }*)streamFormat;
- (id)streamInputID;
- (void)thermalLevelDidChange:(int)arg1;

@end
