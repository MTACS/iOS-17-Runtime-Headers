
@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    NSXPCListener * _listener;
    NSXPCListener * _listenerForFontServicesDaemon;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSXPCListener *listenerForFontServicesDaemon;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(id /* block */)arg2;
- (void)checkin:(id /* block */)arg1;
- (id)connection;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerForFontServicesDaemon;
- (bool)pathsContainsFontAsset:(id)arg1;
- (void)ping:(id)arg1 reply:(id /* block */)arg2;
- (void)registeredFontsChanged:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setListenerForFontServicesDaemon:(id)arg1;

@end
