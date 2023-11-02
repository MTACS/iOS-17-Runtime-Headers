
@interface SBFocusModesHomeScreenSettingsServer : NSObject <BSServiceConnectionListenerDelegate, SBSFocusModesHomeScreenSettingsClientToServerInterface> {
    FBServiceClientAuthenticator * _authenticator;
    NSMutableArray * _connections;
    <SBFocusModesHomeScreenSettingsServerDelegate> * _delegate;
    BSServiceConnectionListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) FBServiceClientAuthenticator *authenticator;
@property (nonatomic, readonly, copy) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFocusModesHomeScreenSettingsServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSServiceConnectionListener *listener;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (oneway void)addSuggestedHomeScreenPageWithRequest:(id)arg1;
- (id)authenticator;
- (id)connections;
- (id)delegate;
- (oneway void)homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)homeScreenSnapshotsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (oneway void)updateFocusModeHomeScreenSettingsWithRequest:(id)arg1;

@end
