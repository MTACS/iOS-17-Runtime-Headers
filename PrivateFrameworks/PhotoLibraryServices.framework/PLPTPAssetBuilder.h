
@interface PLPTPAssetBuilder : NSObject {
    PLMutablePTPAsset * _adjustmentPtpAsset;
    <PLPTPTransferableAsset> * _asset;
    PLSpatialOverCaptureInformation * _cachedSpatialOverCaptureInformation;
    PLMutablePTPAsset * _commonPtpAsset;
    <PLPTPConversionSupport> * _conversionSupport;
    NSMutableArray * _convertedAssets;
    PLMutablePTPAsset * _currentPtpAsset;
    PLMutablePTPAsset * _diagnosticPtpAsset;
    <PLFileManager> * _fileManager;
    NSString * _filenameForPTP;
    PLMutablePTPAsset * _fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset * _fullSizeRenderVideoPtpAsset;
    bool  _irisSidecarRequiresFormatConversion;
    PLMutablePTPAsset * _originalAdjustmentPtpAsset;
    PLMutablePTPAsset * _originalPtpAsset;
    PLMutablePTPAsset * _penultimateImagePtpAsset;
    PLMutablePTPAsset * _penultimateVideoPtpAsset;
    NSArray * _sidecarPtpAssets;
    PLMutablePTPAsset * _spatialOverCaptureImagePtpAsset;
    PLMutablePTPAsset * _spatialOverCaptureVideoComplementPtpAsset;
}

+ (bool)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2;

- (void).cxx_destruct;
- (id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3;
- (void)_buildAdjustmentAsset;
- (void)_buildBurst;
- (void)_buildCommonAsset;
- (void)_buildDeletedFlag;
- (void)_buildDiagnosticAsset;
- (bool)_buildDirectoryPathAndFilename;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildFingerprint;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (void)_buildGPSInformation;
- (void)_buildGroupUUID;
- (void)_buildImageDimensions;
- (void)_buildModificationAndCreationDate;
- (void)_buildOrientation;
- (bool)_buildOriginalAsset;
- (void)_buildOriginatingAssetID;
- (void)_buildPhotoKey;
- (void)_buildRelatedUUID;
- (void)_buildSidecarAssets;
- (void)_buildSlowMo;
- (void)_buildSpatialOverCaptureGroupIdentifier;
- (void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
- (void)_buildThumbnailDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildTimelapse;
- (void)_durationOfTheAsset;
- (bool)_hasIrisSidecarFile;
- (bool)_suppressPtpInfo;
- (void)_updateAsset:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (void)buildOriginalAdjustmentPtpAsset;
- (void)buildPenultimateImagePtpAsset;
- (void)buildPenultimateVideoPtpAsset;
- (void)buildSpatialOverCaptureContentPtpAsset;
- (void)buildSpatialOverCaptureVideoComplementPtpAsset;
- (bool)hasSpatialOverCaptureContent;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3;
- (id)pictureTransferProtocolAssets;
- (id)spatialOverCaptureInformation;
- (void)updateAssetForFormatConversion:(id)arg1 sourceHints:(id)arg2 forceLegacyConversion:(bool)arg3 assetTypeLabel:(id)arg4;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)arg1;

@end
