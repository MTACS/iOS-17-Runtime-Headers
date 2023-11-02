
@interface _LSSpringBoardCall : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _callCompletionHandlerWhenFullyComplete;
    NSXPCConnection * _clientXPCConnection;
    NSDictionary * _launchOptions;
    NSString * _schemeIfNotFileURL;
    BSServiceConnectionEndpoint * _targetServiceConnectionEndpoint;
}

@property (copy) NSString *bundleIdentifier;
@property bool callCompletionHandlerWhenFullyComplete;
@property (retain) NSXPCConnection *clientXPCConnection;
@property (copy) NSDictionary *launchOptions;
@property (retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint;

+ (id)springBoardDeadlockPreventionQueue;
+ (id)springBoardQueue;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (bool)callCompletionHandlerWhenFullyComplete;
- (void)callSpringBoardWithCompletionHandler:(id /* block */)arg1;
- (void)callWithCompletionHandler:(id /* block */)arg1;
- (id)clientXPCConnection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)launchOptions;
- (void)lieWithCompletionHandler:(id /* block */)arg1;
- (void)promptAndCallSpringBoardWithCompletionHandler:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCallCompletionHandlerWhenFullyComplete:(bool)arg1;
- (void)setClientXPCConnection:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setTargetServiceConnectionEndpoint:(id)arg1;
- (id)targetServiceConnectionEndpoint;

@end
