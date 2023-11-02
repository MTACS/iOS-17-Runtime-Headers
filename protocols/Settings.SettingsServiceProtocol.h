
@protocol Settings.SettingsServiceProtocol

@required

- (<_TtP8Settings27SettingsHostServiceProvider_> *)serviceHost;
- (void)setServiceHost:(id <_TtP8Settings27SettingsHostServiceProvider_>)arg1;

@optional

- (void)filterSearchAnchorsForSidebarItem:(void *)arg1 suggestedAnchors:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getSidebarItems:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getSidebarSections:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)isAvailable:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)openURL:(NSURL *)arg1;

@end
