
@interface CXXPCProvider : CXProvider {
    NSXPCConnection * _connection;
    int  _notifyToken;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (int)notifyToken;
- (bool)requiresProxyingAVAudioSessionState;
- (void)setConnection:(id)arg1;
- (void)setNotifyToken:(int)arg1;

@end
