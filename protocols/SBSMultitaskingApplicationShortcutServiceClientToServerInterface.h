
@protocol SBSMultitaskingApplicationShortcutServiceClientToServerInterface <NSObject>

@required

- (oneway void)fetchSupportedShortcutActionsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (oneway void)performShortcutAction:(NSNumber *)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)stopObservingUpdatesForBundleIdentifier:(NSString *)arg1;

@end
