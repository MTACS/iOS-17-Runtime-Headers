
@interface SHSheetUIServiceClient : NSObject {
    BSServiceConnection * _connection;
    SHSheetUIServiceClientContext * _currentContext;
    long long  _pendingRequest;
    <SHSheetContentPresenter> * _presenter;
    NSString * _sessionIdentifier;
    long long  _state;
}

@property (nonatomic, readonly) BSServiceConnection *connection;
@property (nonatomic, retain) SHSheetUIServiceClientContext *currentContext;
@property (nonatomic) long long pendingRequest;
@property (nonatomic, readonly) <SHSheetContentPresenter> *presenter;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_activateConnection;
- (void)_didActivateConnection;
- (void)_didInvalidateConnection;
- (void)_reconnect;
- (void)_setupNewConnection;
- (void)connect;
- (id)connection;
- (id)currentContext;
- (id)initWithSessionIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (long long)pendingRequest;
- (id)presenter;
- (id)sessionIdentifier;
- (id)sessionServer;
- (void)setCurrentContext:(id)arg1;
- (void)setPendingRequest:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateWithContext:(id)arg1;

@end
