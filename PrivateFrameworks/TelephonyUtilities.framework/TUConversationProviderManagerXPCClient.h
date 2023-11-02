
@interface TUConversationProviderManagerXPCClient : NSObject <TUConversationProviderManagerDataSource, TUConversationProviderManagerXPCClient> {
    bool  _hasInitialState;
    bool  _hasRequestedInitialState;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldConnectToHost;
    int  _shouldConnectToken;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitialState;
@property (nonatomic) bool hasRequestedInitialState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldConnectToHost;
@property (nonatomic) int shouldConnectToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)conversationProviderManagerAllowedClasses;
+ (id)conversationProviderManagerClientXPCInterface;
+ (id)conversationProviderManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_invokeCompletionHandler:(id /* block */)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)arg1;
- (id)asynchronousServerWithErrorHandler:(id /* block */)arg1;
- (void)conversationProviderForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)doesHandle:(id)arg1 correspondToConversationProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generatePseudonymHandleForConversationProvider:(id)arg1 expiryDuration:(double)arg2 URI:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasInitialState;
- (bool)hasRequestedInitialState;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)registerConversationProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForCallbacksForProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (void)renewPseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 expirationDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)revokePseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setHasInitialState:(bool)arg1;
- (void)setHasRequestedInitialState:(bool)arg1;
- (void)setShouldConnectToHost:(bool)arg1;
- (void)setShouldConnectToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldConnectToHost;
- (int)shouldConnectToken;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (oneway void)updateConversationProviders:(id)arg1;
- (id)xpcConnection;

@end
