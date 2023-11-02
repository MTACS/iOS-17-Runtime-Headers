
@interface CloudSettingsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    CloudSettingsService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CloudSettingsService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStoreIdentifier:(id)arg1 settingsMediator:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)service;
- (void)setService:(id)arg1;

@end
