
@interface IAMICPropertyStorage : NSObject <IAMPropertyStorage> {
    ICInAppMessageManager * _iTunesCloudIAMManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;

@end
