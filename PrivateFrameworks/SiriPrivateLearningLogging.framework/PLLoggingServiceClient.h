
@interface PLLoggingServiceClient : NSObject {
    NSXPCConnection * _clientConnection;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)makeClient;

- (void).cxx_destruct;
- (id)clientConnection;
- (id)init;
- (id)serialQueue;
- (void)setClientConnection:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)storeInstrumentationWithEvents:(id)arg1 completion:(id /* block */)arg2;

@end
