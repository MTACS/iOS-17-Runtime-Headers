
@interface _SBRemoteAlertHandleServerTarget : NSObject <SBSRemoteAlertHandleServiceServerInterface> {
    BSServiceConnection * _connection;
    <SBSRemoteAlertHandleServiceServerInterface> * _proxyInterface;
}

@property (nonatomic, readonly) BSServiceConnection *connection;
@property (nonatomic) <SBSRemoteAlertHandleServiceServerInterface> *proxyInterface;

+ (id)currentTarget;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
- (id)connection;
- (id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;
- (id)proxyInterface;
- (id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
- (void)setProxyInterface:(id)arg1;

@end
