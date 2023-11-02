
@interface STSImageDownloadOperation : NSOperation {
    id /* block */  _begin;
    id /* block */  _completion;
    bool  _executing;
    SFStartNetworkSearchFeedback * _feedback;
    bool  _finished;
    id /* block */  _progress;
    NSURLRequest * _request;
    double  _startTime;
    NSURLSessionDownloadTask * _task;
}

@property (getter=isExecuting, nonatomic) bool executing;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, readonly) NSURLRequest *request;

- (void).cxx_destruct;
- (void)_markAsCompleted;
- (void)cancel;
- (void)completedWithResponse:(id)arg1 location:(id)arg2 timingData:(id)arg3 error:(id)arg4;
- (id)initWithRequest:(id)arg1 session:(id)arg2 begin:(id /* block */)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)request;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;
- (void)updateProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;

@end
