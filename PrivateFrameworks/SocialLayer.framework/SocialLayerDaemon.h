
@interface SocialLayerDaemon : NSObject <NSXPCListenerDelegate, SLDServiceMultiplexDelegate, SLDServiceMultiplexing> {
    int  _appleLanguageChangeNotificationToken;
    NSMapTable * _connectionsToServicesTable;
    NSMutableArray * _multiplexesPendingRemoval;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) int appleLanguageChangeNotificationToken;
@property (nonatomic, retain) NSMapTable *connectionsToServicesTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *multiplexesPendingRemoval;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)_systemUIServiceIdentifier;

- (void).cxx_destruct;
- (void)_acceptMainConnection:(id)arg1;
- (void)_appConnectionInvalidated:(id)arg1;
- (void)_appleSystemLanguageDidChange:(id)arg1;
- (int)appleLanguageChangeNotificationToken;
- (id)connectionsToServicesTable;
- (void)endpointForServiceNamed:(id)arg1 reply:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)multiplexDidRemoveAllServices:(id)arg1;
- (id)multiplexesPendingRemoval;
- (void)setConnectionsToServicesTable:(id)arg1;
- (void)setMultiplexesPendingRemoval:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)setupListeners;
- (id)xpcListener;

@end
