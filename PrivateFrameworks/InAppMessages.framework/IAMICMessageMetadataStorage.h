
@interface IAMICMessageMetadataStorage : NSObject <IAMMessageMetadataStorage> {
    ICInAppMessageManager * _iTunesCloudIAMManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)metadataForBundleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;

@end
