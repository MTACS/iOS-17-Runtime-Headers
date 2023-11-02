
@interface Settings.SettingsService : _TtCs12_SwiftObject <Settings.SettingsServiceProtocol> {
    void _connection;
    void delegate;
    void extension;
    void serviceHost;
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
