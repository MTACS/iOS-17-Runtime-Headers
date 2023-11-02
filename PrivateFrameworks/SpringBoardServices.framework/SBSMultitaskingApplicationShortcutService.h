
@interface SBSMultitaskingApplicationShortcutService : NSObject <SBSMultitaskingApplicationShortcutServiceServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableDictionary * _supportedShortcutsByBundleIdentifier;
    NSCountedSet * _trackedBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)dealloc;
- (void)performMultitaskingShortcutAction:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)startObservingSupportedShortcutsForBundleIdentifier:(id)arg1;
- (void)stopObservingSupportedShortcutsForBundleIdentifier:(id)arg1;
- (unsigned long long)supportedShortcutActionsForBundleIdentifier:(id)arg1;
- (oneway void)updateSupportedShortcutActionsForBundleIdentifiers:(id)arg1;

@end
