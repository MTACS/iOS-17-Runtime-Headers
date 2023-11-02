
@interface WFUIPresenterXPCConnection : NSObject <WFUIPresenterConnection> {
    bool  _connected;
    NSXPCConnection * _connection;
    id /* block */  _errorHandler;
    <WFUIPresenterHostInterface> * _host;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) bool connected;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WFUIPresenterHostInterface> *host;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)connected;
- (id)connection;
- (id /* block */)errorHandler;
- (id)host;
- (id)initWithConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)isConnected;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)presenterWithErrorHandler:(id /* block */)arg1;
- (void)resumeConnectionIfNecessary;
- (void)setConnected:(bool)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHost:(id)arg1;
- (id)synchronousPresenterWithErrorHandler:(id /* block */)arg1;

@end
