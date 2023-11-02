
@interface PROPlugInManager : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedPlugInManager;

- (void)addDeferredPluginBundle:(id)arg1;
- (void)addDocumentBlockedPlugin:(id)arg1;
- (void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4;
- (void)addPlugInSearchDirectory:(id)arg1;
- (id)blockedDocumentPlugins;
- (id)blockedLibraryPlugins;
- (bool)bundleIsDeferred:(id)arg1;
- (bool)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id*)arg2;
- (bool)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2;
- (id)deferredPluginKitPlugs;
- (id)delegate;
- (void)getNameOverrides:(id)arg1 pluginName:(id*)arg2 bundleName:(id*)arg3;
- (id)loadBlockPluginList:(struct __CFString { }*)arg1;
- (void)loadDeferredPlugin:(id)arg1;
- (void)loadDeferredPlugins;
- (id)plugInGroupWithUUID:(struct __CFUUID { }*)arg1;
- (id)plugInGroups;
- (id)plugInGroupsMutable;
- (id)plugInSearchDirectories;
- (id)plugInWithClassName:(id)arg1;
- (id)plugInWithUUID:(struct __CFUUID { }*)arg1;
- (id)plugIns;
- (id)plugInsForProtocol:(id)arg1;
- (id)plugInsForProtocols:(id)arg1;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)removeAllBlockedDocumentPlugins;
- (void)removeAllPlugIns;
- (void)removeDeferredPluginBundle:(id)arg1;
- (void)removePlugin:(id)arg1;
- (bool)requiresProtocolsToBePresentWhenLoading;
- (void)scanForPlugIns;
- (void)scanForPlugInsInBundle:(id)arg1 deferralNotification:(id /* block */)arg2;
- (void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2 deferralNotification:(id /* block */)arg3;
- (void)scanForPlugInsInDirectory:(id)arg1 actuallyLoad:(bool)arg2 deferralNotification:(id /* block */)arg3;
- (void)scanForPlugInsInDirectory:(id)arg1 deferralNotification:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPlugInSearchDirectories:(id)arg1;
- (void)setRequiresProtocolsToBePresentWhenLoading:(bool)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1 version:(unsigned int)arg2;

@end
