
@interface PLVideoInternalResourceContext : NSObject <PLVideoChoosingAssetInformation, PLVideoResourceContext> {
    PLManagedAsset * _asset;
    bool  _isWalrusEnabled;
    NSManagedObjectContext * _moc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWalrusEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingResourceForVideoResource:(id)arg1;
- (bool)hasAdjustments;
- (id)initWithManagedObjectContext:(id)arg1 asset:(id)arg2;
- (bool)isPhotoIris;
- (bool)isWalrusEnabled;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (void)repairResource:(id)arg1;
- (bool)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;
- (bool)validateResource:(id)arg1;
- (id)videoResourcesMatchingVersions:(id)arg1;

@end
