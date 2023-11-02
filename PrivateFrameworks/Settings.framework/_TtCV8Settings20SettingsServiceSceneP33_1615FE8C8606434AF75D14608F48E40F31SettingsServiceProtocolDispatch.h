
@interface _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch : _TtCs12_SwiftObject <Settings.SettingsServiceProtocol> {
    void target;
}

@property (nonatomic, retain) <_TtP8Settings27SettingsHostServiceProvider_> *serviceHost;

- (void)filterSearchAnchorsForSidebarItem:(id)arg1 suggestedAnchors:(id)arg2 reply:(id /* block */)arg3;
- (void)getSidebarItems:(id /* block */)arg1;
- (void)getSidebarSections:(id /* block */)arg1;
- (void)isAvailable:(id /* block */)arg1;
- (void)openURL:(id)arg1;
- (id)serviceHost;
- (void)setServiceHost:(id)arg1;

@end
