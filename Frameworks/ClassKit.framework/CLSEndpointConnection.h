
@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {
    bool  _connectionBorked;
    NSXPCListenerEndpoint * _endpoint;
    bool  _interrupted;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    id /* block */  _onConnect;
    id /* block */  _onInterupt;
    NSString * _overrideBundleIdentifier;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onConnect;
@property (nonatomic, copy) id /* block */ onInterupt;
@property (nonatomic, copy) NSString *overrideBundleIdentifier;
@property (readonly) Class superclass;

+ (id)classKitEnvironment;
+ (id)instanceForEndpoint:(id)arg1;
+ (bool)isAllowedToMakeXPCCalls;
+ (bool)isClassKitEnabled;
+ (bool)isInDevelopmentEnvironment;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerForDarwinNotifications;
- (void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)accountChanged;
- (void)addBarrierBlock:(id /* block */)arg1;
- (void)connect;
- (void)connectionBorked:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (id)dataServer:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)devModeChanged;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (bool)isBorked;
- (void)listAppsWithCompletion:(id /* block */)arg1;
- (void)lock;
- (id /* block */)onConnect;
- (id /* block */)onInterupt;
- (id)overrideBundleIdentifier;
- (id)server:(id /* block */)arg1;
- (id)serverConnection;
- (void)setOnConnect:(id /* block */)arg1;
- (void)setOnInterupt:(id /* block */)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)syncDataServer:(id /* block */)arg1;
- (id)syncServer:(id /* block */)arg1;
- (id)syncUtilityServer:(id /* block */)arg1;
- (void)unlock;
- (id)utilityServer:(id /* block */)arg1;

@end
