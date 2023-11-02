
@interface PHAssetCreationOptions : NSObject {
    PHAssetCreationAdjustmentBakeInOptions * _adjustmentBakeInOptions;
    bool  _copyAsAlternateAsset;
    bool  _copyOriginal;
    bool  _copySinglePhotoFromBurst;
    bool  _copyStillPhotoFromLivePhoto;
    bool  _crashBeforeCreation;
    PHAssetCreationMetadataCopyOptions * _metadataCopyOptions;
    bool  _resetUserSpecificMetadata;
    bool  _shouldCreateScreenshot;
    bool  _shouldDownloadOrCloudReReferenceMissingResources;
    bool  _shouldUseAutomaticallyGeneratedOriginalFilename;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillSourceTime;
    bool  _useRecoverableStagingDirectory;
}

@property (nonatomic, copy) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (nonatomic) bool copyAsAlternateAsset;
@property (nonatomic) bool copyOriginal;
@property (nonatomic) bool copySinglePhotoFromBurst;
@property (nonatomic) bool copyStillPhotoFromLivePhoto;
@property (nonatomic) bool crashBeforeCreation;
@property (nonatomic, copy) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (nonatomic) bool resetUserSpecificMetadata;
@property (nonatomic) bool shouldCreateScreenshot;
@property (nonatomic) bool shouldDownloadOrCloudReReferenceMissingResources;
@property (nonatomic) bool shouldUseAutomaticallyGeneratedOriginalFilename;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillSourceTime;
@property (nonatomic) bool useRecoverableStagingDirectory;

- (void).cxx_destruct;
- (id)adjustmentBakeInOptions;
- (bool)copyAsAlternateAsset;
- (bool)copyOriginal;
- (bool)copySinglePhotoFromBurst;
- (bool)copyStillPhotoFromLivePhoto;
- (bool)crashBeforeCreation;
- (id)init;
- (id)metadataCopyOptions;
- (bool)resetUserSpecificMetadata;
- (void)setAdjustmentBakeInOptions:(id)arg1;
- (void)setCopyAsAlternateAsset:(bool)arg1;
- (void)setCopyOriginal:(bool)arg1;
- (void)setCopySinglePhotoFromBurst:(bool)arg1;
- (void)setCopyStillPhotoFromLivePhoto:(bool)arg1;
- (void)setCrashBeforeCreation:(bool)arg1;
- (void)setMetadataCopyOptions:(id)arg1;
- (void)setResetUserSpecificMetadata:(bool)arg1;
- (void)setShouldCreateScreenshot:(bool)arg1;
- (void)setShouldDownloadOrCloudReReferenceMissingResources:(bool)arg1;
- (void)setShouldUseAutomaticallyGeneratedOriginalFilename:(bool)arg1;
- (void)setStillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUseRecoverableStagingDirectory:(bool)arg1;
- (bool)shouldCreateScreenshot;
- (bool)shouldDownloadOrCloudReReferenceMissingResources;
- (bool)shouldUseAutomaticallyGeneratedOriginalFilename;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillSourceTime;
- (bool)useRecoverableStagingDirectory;

@end
