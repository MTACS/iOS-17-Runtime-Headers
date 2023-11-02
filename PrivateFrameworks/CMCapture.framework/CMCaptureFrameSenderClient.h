
@interface CMCaptureFrameSenderClient : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _connectionIsValid;
    int  _pid;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) bool connectionIsValid;
@property (readonly) int pid;

- (void)_invalidate;
- (bool)connectionIsValid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (int)pid;
- (int)sendXCPSampleBuffer:(id)arg1;

@end
