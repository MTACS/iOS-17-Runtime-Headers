
@interface MRMediaControls : NSObject <MRMediaControlsProtocol, NSXPCListenerDelegate> {
    MRMediaControlsConfiguration * _configuration;
    NSXPCConnection * _connection;
    id /* block */  _customRowDidTapHandler;
    id /* block */  _dismissHandler;
    id /* block */  _dismissHandlerWithReason;
    unsigned long long  _dismissalReason;
    NSXPCListener * _listener;
    double  _preferredWidth;
    NSString * _routeUID;
    bool  _shouldObserveRoutingContextUIDChanges;
    NSString * _tappedCustomRowIdentifier;
}

@property (nonatomic, readonly) MRMediaControlsConfiguration *configuration;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ customRowDidTapHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, copy) id /* block */ dismissHandlerWithReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic) double preferredWidth;
@property (nonatomic, copy) NSString *routeUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)arg1;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (id)_dismissalReasonString:(unsigned long long)arg1;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)arg1;
- (void)_reset;
- (bool)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)arg1;
- (void)_updateAudioSessionRoutingContext;
- (void)addCustomRowWithType:(id)arg1 titleOverride:(id)arg2 identifier:(id)arg3;
- (id)configuration;
- (id)connection;
- (id /* block */)customRowDidTapHandler;
- (void)dealloc;
- (void)dismiss;
- (id /* block */)dismissHandler;
- (id /* block */)dismissHandlerWithReason;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 shouldObserveRoutingContextUIDChanges:(bool)arg2;
- (id)initWithRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openConnection;
- (double)preferredWidth;
- (void)present;
- (id)routeUID;
- (void)setConnection:(id)arg1;
- (void)setCustomRowDidTapHandler:(id /* block */)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setDismissHandlerWithReason:(id /* block */)arg1;
- (void)setDismissalReason:(unsigned long long)arg1;
- (void)setListener:(id)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setRouteUID:(id)arg1;
- (void)setTappedCustomRowIdentifier:(id)arg1;
- (void)startPrewarming;
- (void)stopPrewarming;

@end
