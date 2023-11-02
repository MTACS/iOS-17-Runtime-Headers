
@interface FontPickerSupporter : NSObject {
    NSMutableSet * _activatedFontFilePaths;
    NSXPCListenerEndpoint * _clientEndpoint;
    bool  _clientHasFontAccessEntitlement;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSMutableSet *activatedFontFilePaths;
@property (nonatomic, retain) NSXPCListenerEndpoint *clientEndpoint;
@property (nonatomic) bool clientHasFontAccessEntitlement;
@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)activatedFontFilePaths;
- (void)checkin:(id /* block */)arg1;
- (id)clientEndpoint;
- (bool)clientHasFontAccessEntitlement;
- (bool)clientHasFontAccessEntitlement:(struct { unsigned int x1[8]; })arg1;
- (id)connection;
- (void)done;
- (id)initWithEndpoint:(id)arg1;
- (void)setActivatedFontFilePaths:(id)arg1;
- (void)setClientEndpoint:(id)arg1;
- (void)setClientHasFontAccessEntitlement:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setup;
- (void)synchronize:(id)arg1 deactivated:(id)arg2 includingFontAssets:(bool)arg3;

@end
