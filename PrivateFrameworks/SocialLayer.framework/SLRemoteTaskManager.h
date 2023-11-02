
@interface SLRemoteTaskManager : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundConcurrentQueue;
    <SLRemoteTaskManagerDelegate> * _delegate;
    bool  _synchronous;
    NSObject<OS_dispatch_queue> * _targetSerialQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundConcurrentQueue;
@property (nonatomic, readonly) <SLRemoteTaskManagerDelegate> *delegate;
@property (nonatomic) bool synchronous;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetSerialQueue;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (id)backgroundConcurrentQueue;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 targetSerialQueue:(id)arg2 synchronous:(bool)arg3;
- (void)setBackgroundConcurrentQueue:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTargetSerialQueue:(id)arg1;
- (void)startTask:(id /* block */)arg1 withTimeout:(double)arg2 timeoutHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (bool)synchronous;
- (id)targetSerialQueue;

@end
