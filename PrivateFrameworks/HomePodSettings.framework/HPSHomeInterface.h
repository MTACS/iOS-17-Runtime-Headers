
@interface HPSHomeInterface : NSObject {
    bool  _connectionValid;
    <HPSettingsConnectionInterfaceDelegate> * _delegate;
    NSXPCConnection * _hpsConnection;
}

@property (nonatomic) bool connectionValid;
@property (nonatomic) <HPSettingsConnectionInterfaceDelegate> *delegate;
@property (nonatomic, retain) NSXPCConnection *hpsConnection;

+ (id)connectionError;

- (void).cxx_destruct;
- (void)_accessoryDidUpdateAttribute:(id)arg1 withContext:(id)arg2;
- (bool)connectionValid;
- (void)dealloc;
- (id)delegate;
- (void)getAirPlaySettings:(id /* block */)arg1;
- (void)getCurrentHomeAttribute:(id)arg1 completion:(id /* block */)arg2;
- (void)getHomeAccessoryAttribute:(id)arg1 completion:(id /* block */)arg2;
- (void)getHomeKitCachedSettings:(id /* block */)arg1;
- (void)handleConnectionInterrupted;
- (void)handleConnectionInvalidated;
- (id)hpsConnection;
- (id)initWithDelegate:(id)arg1;
- (void)isAutomaticSoftwareUpdateEnabled:(id /* block */)arg1;
- (void)isHomeKitSyncComplete:(id /* block */)arg1;
- (void)setConnectionValid:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHpsConnection:(id)arg1;
- (void)startConnection;

@end
