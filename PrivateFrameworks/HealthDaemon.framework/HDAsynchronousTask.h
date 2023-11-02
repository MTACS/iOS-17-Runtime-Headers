
@interface HDAsynchronousTask : NSObject {
    id /* block */  _checkpointHandler;
    id /* block */  _handler;
    bool  _hasTimeout;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
}

- (void).cxx_destruct;

@end
