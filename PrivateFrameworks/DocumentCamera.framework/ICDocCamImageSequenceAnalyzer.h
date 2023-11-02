
@interface ICDocCamImageSequenceAnalyzer : NSObject {
    bool  _bRealTime;
    bool  _bSynchronous;
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _dq;
    NSMutableArray * _frameArray;
    NSObject<OS_dispatch_semaphore> * _frameArraySem;
    NSObject<OS_dispatch_semaphore> * _queueSizeSem;
    VNSequenceRequestHandler * _seqHandler;
    NSDictionary * _sessionOptions;
}

- (void).cxx_destruct;
- (void)addFrame:(struct __CVBuffer { }*)arg1 metaData:(id)arg2 frameOptions:(id)arg3 rectangleRequest:(id)arg4 pixelFocalLength:(float)arg5 cameraIntrinsicData:(struct __CFData { }*)arg6;
- (void)dealloc;
- (void)finish;
- (id)initWithOptions:(id)arg1 callback:(id /* block */)arg2;

@end
