
@interface _SBAccessibilityWindowHostingControllerServerTarget : NSObject {
    BSServiceConnection * _connection;
    <SBSAccessibilityWindowHostingClientToServerInterface> * _proxyInterface;
}

@property (nonatomic, readonly) BSServiceConnection *connection;
@property (nonatomic) <SBSAccessibilityWindowHostingClientToServerInterface> *proxyInterface;

+ (id)currentTarget;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (id)connection;
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;
- (id)proxyInterface;
- (void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2;
- (void)setProxyInterface:(id)arg1;
- (void)unregisterWindowWithContextID:(id)arg1;

@end
