
@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    CKContainer * _applicationContainer;
    NSString * _applicationFromURL;
    CKContainer * _baseContainer;
    bool  _canceled;
    NSString * _kindFromURL;
    NSString * _titleFromURL;
}

+ (id)normalizeKind:(id)arg1 forApplication:(id)arg2;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2;
- (bool)canRetrieveThumbnailForApplication:(id)arg1;
- (bool)canUseCloudKit;
- (void)cancel;
- (void)completeRetrievingThumbnailForShareMetadata:(id)arg1 application:(id)arg2 kind:(id)arg3 title:(id)arg4;
- (void)completeUsingApplication:(id)arg1 kind:(id)arg2 title:(id)arg3 thumbnail:(id)arg4;
- (void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2;
- (void)fail;
- (id)iconFromShare:(id)arg1;
- (id)initWithContext:(id)arg1 applicationFromURL:(id)arg2 kindFromURL:(id)arg3 titleFromURL:(id)arg4;
- (void)start;

@end
