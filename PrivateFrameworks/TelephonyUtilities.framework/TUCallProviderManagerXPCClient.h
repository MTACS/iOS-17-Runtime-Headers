
@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerDataSource, TUCallProviderManagerXPCClient> {
    <TUCallProviderManagerDataSourceDelegate> * _delegate;
    NSDictionary * _localProvidersByIdentifier;
    NSDictionary * _pairedHostDeviceProvidersByIdentifier;
    NSDictionary * _providersByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _requestedInitialState;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) bool currentProcessCanAccessInitialState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUCallProviderManagerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *localProvidersByIdentifier;
@property (nonatomic, copy) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property (nonatomic, copy) NSDictionary *providersByIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool requestedInitialState;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)callProviderManagerAllowedClasses;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_requestInitialState;
- (void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (void)blockUntilInitialStateReceived;
- (bool)currentProcessCanAccessInitialState;
- (void)dealloc;
- (id)delegate;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)launchAppForDialRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)localProvidersByIdentifier;
- (bool)openURL:(id)arg1 isSensitive:(bool)arg2 error:(id*)arg3;
- (id)pairedHostDeviceProvidersByIdentifier;
- (id)providersByIdentifier;
- (id)queue;
- (bool)requestedInitialState;
- (id)server;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalProvidersByIdentifier:(id)arg1;
- (void)setPairedHostDeviceProvidersByIdentifier:(id)arg1;
- (void)setProvidersByIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestedInitialState:(bool)arg1;
- (void)setToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (id)xpcConnection;

@end
