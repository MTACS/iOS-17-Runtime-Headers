
@interface VKFrameProcessor : NSObject <NSLocking> {
    double  _currentProcessingInterval;
    double  _infrequentProcessingInterval;
    bool  _isCancelled;
    bool  _isExecuting;
    double  _lastProcessingTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _processingInterval;
    bool  _requestImmediateProcessing;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (double)defaultInfrequentProcessingInterval;
+ (double)defaultProcessingInterval;

- (void).cxx_destruct;
- (void)cancel;
- (void)enqueueFrame:(id)arg1;
- (double)infrequentProcessingInterval;
- (id)init;
- (bool)isCancelled;
- (bool)isExecuting;
- (void)lock;
- (void)processFrame:(id)arg1;
- (double)processingInterval;
- (void)requestImmediateProcessing;
- (void)reset;
- (id)resultHandlerQueue;
- (id)serialQueue;
- (void)setInfrequentProcessingInterval:(double)arg1;
- (void)setProcessingInterval:(double)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)unlock;
- (bool)wantsThrottling;

@end
