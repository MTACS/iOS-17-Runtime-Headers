
@interface INCExtensionPlugInBundleManager : NSObject {
    NSMutableDictionary * _intentsSupported;
    NSObject<OS_dispatch_queue> * _intentsSupportedQueue;
    NSDictionary * _pluginsPlistDictionary;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_extensionPlugInBundleForIntent:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_setExtensionPlugInBundle:(id)arg1 forIntent:(id)arg2 bundleIdentifier:(id)arg3;
- (id)extensionForIntent:(id)arg1;
- (id)init;
- (bool)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(bool*)arg2;

@end
