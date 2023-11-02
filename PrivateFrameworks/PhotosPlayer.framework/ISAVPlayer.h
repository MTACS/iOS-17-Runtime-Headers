
@interface ISAVPlayer : AVPlayer {
    NSObject<OS_dispatch_queue> * _actualDispatchQueue;
    ISRateCurveRequest * _currentRequest;
    NSObject<OS_dispatch_queue> * _initializedDispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *actualDispatchQueue;

+ (bool)isAppleInternal;
+ (bool)isSpringBoard;

- (void).cxx_destruct;
- (void)_cancelRateCurveRequest;
- (void)_setRate:(float)arg1;
- (id)actualDispatchQueue;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (void)playToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(id /* block */)arg4;
- (void)setAllowsPixelBufferPoolSharing:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setUsesDedicatedNotificationQueueForMediaServices:(bool)arg1;

@end
