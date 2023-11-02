
@protocol CHSChronoWidgetServiceServerInterface <NSObject>

@required

- (CHSURLSessionToken *)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (oneway void)flushPowerlog;
- (NSData *)widgetEnvironmentDataForBundleIdentifier:(NSString *)arg1;

@optional

- (BSAction *)acquireKeepAliveAssertionForExtensionBundleIdentifier:(NSString *)arg1 reason:(NSString *)arg2 error:(out id*)arg3;
- (CHSRemoteDevicesBox *)allPairedDevices;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSWidgetConfigurationHostsBox *, NSError *, void*
- (oneway void)fetchDescriptorsForContainerBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSWidgetDescriptorsBox *, NSError *, void*
- (oneway void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSData *, NSError *, void*
- (oneway void)loadSuggestedWidget:(void *)arg1 metrics:(void *)arg2 stackIdentifier:(void *)arg3 reason:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: CHSWidget *, CHSWidgetMetrics *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAction *, NSArray<__ATXInfoTimelineEntry__> *, NSError *, void*
- (oneway void)pairDeviceWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)performDescriptorDiscoveryForHost:(NSString *)arg1;
- (oneway void)reloadDescriptorsForContainerBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSWidgetDescriptorsBox *, NSError *, void*
- (bool)reloadRemoteWidgetsWithError:(id*)arg1;
- (void)reloadTimeline:(CHSTimelineReloadRequest *)arg1 error:(id*)arg2;
- (bool)remoteWidgetsEnabled;
- (oneway void)removeWidgetHostWithIdentifier:(NSString *)arg1;
- (oneway void)setActivationState:(NSNumber *)arg1 forWidgetHostWithIdentifier:(NSString *)arg2;
- (oneway void)setWidgetConfiguration:(CHSWidgetConfiguration *)arg1 activationState:(NSNumber *)arg2 forWidgetHostWithIdentifier:(NSString *)arg3;
- (void)subscribeToExtensionsIncludingIntents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSWidgetExtensionsBox *, BSAction *, NSError *, void*
- (void)subscribeToRelevanceEntries:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSRelevanceEntryBox *, BSAction *, NSError *, void*
- (void)subscribeToRemoteDevices:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSRemoteDevicesBox *, BSAction *, NSError *, void*
- (oneway void)suggestionBudgetsForStackIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CHSArrayBox *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHSDictionaryBox *, NSError *, void*
- (bool)toggleRemoteWidgetsEnabled:(NSNumber *)arg1 error:(id*)arg2;
- (bool)unpairDeviceWith:(NSString *)arg1 error:(id*)arg2;

@end
