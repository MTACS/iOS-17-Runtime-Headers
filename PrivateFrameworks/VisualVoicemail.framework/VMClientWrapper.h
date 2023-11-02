
@interface VMClientWrapper : NSObject {
    NSXPCConnection * _clientConnection;
    <VMClientXPCProtocol> * _manager;
    bool  _pingRetry;
}

@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic) <VMClientXPCProtocol> *manager;
@property (nonatomic) bool pingRetry;

+ (bool)isVMXPCAvailable;
+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;

- (void).cxx_destruct;
- (id)asynchronousServerConnectionWithErrorHandler:(id /* block */)arg1;
- (id)clientConnection;
- (void)dealloc;
- (id)init;
- (id)manager;
- (bool)pingRetry;
- (void)setClientConnection:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPingRetry:(bool)arg1;

@end
