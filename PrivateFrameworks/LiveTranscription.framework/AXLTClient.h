
@interface AXLTClient : NSObject <AXLTXPCClientProtocol> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _dataReceivers;
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSMutableDictionary *dataReceivers;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)dataReceivers;
- (id)init;
- (void)initializeServiceConnection;
- (void)pingServiceWithHandler:(id /* block */)arg1;
- (void)registerForTranscriptionIfNecessary;
- (id)serviceConnection;
- (void)setClientQueue:(id)arg1;
- (void)setDataReceivers:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (bool)startTranscribing:(long long)arg1 client:(id)arg2 callbackBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)startTranscribing:(long long)arg1 targetPID:(int)arg2 client:(id)arg3 callbackBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)stopTranscribing:(long long)arg1 client:(id)arg2 error:(id*)arg3;
- (bool)stopTranscribing:(long long)arg1 targetPID:(int)arg2 client:(id)arg3 error:(id*)arg4;
- (void)transcribedData:(id)arg1;

@end
