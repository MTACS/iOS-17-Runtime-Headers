
@protocol NEFilterExtensionProviderHostDelegate <NEExtensionProviderHostDelegate>

@required

- (void)applySettings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEFilterSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createPacketChannelForExtension:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEFilterExtensionProviderHostContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)fetchCurrentRulesForFlow:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEFilterFlow *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NEFilterControlVerdict *, void*
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;
- (void)report:(NEFilterReport *)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;

@end
