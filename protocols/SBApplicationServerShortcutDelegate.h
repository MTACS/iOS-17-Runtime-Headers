
@protocol SBApplicationServerShortcutDelegate <SBApplicationServerDelegate>

@required

- (void)applicationServer:(void *)arg1 client:(void *)arg2 fetchApplicationShortcutItemsOfTypes:(void *)arg3 forBundleIdentifier:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: SBApplicationServer *, <FBSServiceFacilityClientHandle> *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSApplicationShortcutServiceFetchResult *, void*
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setDynamicApplicationShortcutItems:(NSArray *)arg3 forBundleIdentifier:(NSString *)arg4;

@end
