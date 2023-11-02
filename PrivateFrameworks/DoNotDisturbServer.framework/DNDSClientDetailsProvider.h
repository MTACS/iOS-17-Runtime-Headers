
@interface DNDSClientDetailsProvider : NSObject {
    NSMutableDictionary * _detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;

- (void).cxx_destruct;
- (void)_loadPreloadBundles;
- (id)clientDetailsForIdentifier:(id)arg1;
- (id)clientDetailsForIdentifier:(id)arg1 applicationBundleURL:(id)arg2;
- (id)findClientDetailsForIdentifier:(id)arg1;
- (id)init;

@end
