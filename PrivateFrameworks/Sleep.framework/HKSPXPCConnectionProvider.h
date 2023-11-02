
@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding> {
    NSXPCConnection * _connection;
    HKSPXPCConnectionInfo * _connectionInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    id /* block */  _connectionProvider;
    <HKSPXPCConnectionProviderDelegate> * _delegate;
    bool  _invalidated;
    NSMutableDictionary * _pendingMessages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingMessagesLock;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) HKSPXPCConnectionInfo *connectionInfo;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } connectionLock;
@property (nonatomic, readonly, copy) id /* block */ connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSPXPCConnectionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) NSMutableDictionary *pendingMessages;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } pendingMessagesLock;
@property (readonly) Class superclass;

+ (id)providerWithConnectionInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_addPendingMessage:(id)arg1;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_removePendingMessage:(id)arg1;
- (void)_retryPendingMessages;
- (void)_withLock:(id /* block */)arg1;
- (id)connection;
- (id)connectionInfo;
- (struct os_unfair_lock_s { unsigned int x1; })connectionLock;
- (id /* block */)connectionProvider;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didReceiveLifecycleNotification;
- (id)initWithConnectionInfo:(id)arg1;
- (id)initWithConnectionInfo:(id)arg1 connectionProvider:(id /* block */)arg2;
- (void)invalidate;
- (bool)invalidated;
- (bool)isInvalidated;
- (id)pendingMessages;
- (struct os_unfair_lock_s { unsigned int x1; })pendingMessagesLock;
- (void)performRemoteBlock:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
- (void)performRemoteBlock:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2 doSynchronously:(bool)arg3;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
