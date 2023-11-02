
@interface WFUIPresenterLaunchAngelConnection : NSObject <WFUIPresenterConnection> {
    BSServiceConnection<BSServiceConnectionClient> * _connection;
    bool  _connectionInterrupted;
    id /* block */  _errorHandler;
    <WFUIPresenterHostInterface> * _host;
    id /* block */  _interruptionHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (nonatomic) bool connectionInterrupted;
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
- (void)cleanUpWithReason:(id)arg1;
- (id)connection;
- (bool)connectionInterrupted;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id)host;
- (id)init;
- (id /* block */)interruptionHandler;
- (bool)isConnected;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)prepareConnectionIfNecessary;
- (id)presenterWithErrorHandler:(id /* block */)arg1;
- (void)setConnectionInterrupted:(bool)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHost:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;

@end
