
@interface SLGLogXPCClient : NSObject <SLGLogClient, SLGLogClientProtocol> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    <SLGLogClientProtocolDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _lockQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SLGLogClientProtocolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectWithCompletion:(id /* block */)arg1;
- (void)_handshake;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveInitialLogMessageFromDomain:(id)arg1;
- (id)init;
- (void)queryServer:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)serverDidReset;
- (void)setDelegate:(id)arg1;

@end
