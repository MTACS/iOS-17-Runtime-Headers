
@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_source> * _awInitTimer;
    NSObject<OS_dispatch_queue> * _awQueue;
    NSObject<OS_dispatch_source> * _deadlineTimer;
    bool  _errorState;
    bool  _finished;
    bool  _started;
    NSObject<OS_dispatch_source> * _streamingTimer;
    AWUnitTestPearlDevice * _unitTestDevice;
}

@property (nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (void).cxx_destruct;
- (void)awDeliverFaceFound;
- (void)awDeliverStreamingEvent;
- (void)awFinishWithReason:(long long)arg1;
- (void)awSetFaceDetectError:(bool)arg1;
- (void)awSetFaceFound;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)setErrorState:(bool)arg1;
- (void)setUnitTestDevice:(id)arg1;
- (bool)startStreamWithError:(id*)arg1;
- (bool)startWithError:(id*)arg1;
- (void)startWithReply:(id /* block */)arg1;
- (long long)state;
- (id)unitTestDevice;

@end
