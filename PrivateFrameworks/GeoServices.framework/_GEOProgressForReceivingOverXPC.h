
@interface _GEOProgressForReceivingOverXPC : NSProgress {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initVendingEndpoint:(id*)arg1;
- (id)initWithEndpoint:(id)arg1;

@end
