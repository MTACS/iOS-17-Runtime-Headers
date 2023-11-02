
@interface IDSBaseSocketPairConnection : NSObject {
    long long  _bytesReceived;
    int  _connectedSocket;
    IMWeakReference * _delegate;
    double  _lastDateCheck;
    NSMutableArray * _outgoingDataArray;
    double  _prevBPS;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _readQueue;
    NSObject<OS_dispatch_source> * _readSource;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSourceIsResumed;
}

@property (nonatomic, readonly) int socket;

- (void).cxx_destruct;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;
- (void)dealloc;
- (void)endSession;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(bool)arg4;
- (bool)sendData:(id)arg1;
- (void)setDestination:(id)arg1;
- (int)socket;
- (void)start;

@end