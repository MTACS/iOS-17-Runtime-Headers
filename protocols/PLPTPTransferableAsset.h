
@protocol PLPTPTransferableAsset <NSObject>

@required

- (int)avalanchePickType;
- (NSString *)avalancheUUID;
- (long long)cameraProcessingAdjustmentTrashedState;
- (bool)cloudPhotoLibraryEnabled;
- (NSDate *)dateCreated;
- (unsigned short)deferredProcessingNeeded;
- (double)duration;
- (int)embeddedThumbnailOffset;
- (NSString *)filename;
- (long long)height;
- (bool)isAudio;
- (bool)isAvalanchePhoto;
- (bool)isInFlight;
- (bool)isPhoto;
- (bool)isPhotoIris;
- (bool)isVideo;
- (short)kindSubtype;
- (CLLocation *)location;
- (NSURL *)mainFileURL;
- (NSString *)mediaGroupUUID;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)originalFilename;
- (unsigned long long)originalFilesize;
- (long long)originalHeight;
- (short)originalOrientation;
- (NSString *)originalUniformTypeIdentifier;
- (long long)originalWidth;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForDiagnosticFile;
- (NSString *)pathForFullsizeRenderImageFile;
- (NSString *)pathForFullsizeRenderVideoFile;
- (NSString *)pathForOriginalAdjustmentFile;
- (NSString *)pathForOriginalFile;
- (NSString *)pathForPenultimateFullsizeRenderImageFile;
- (NSString *)pathForPenultimateFullsizeRenderVideoFile;
- (NSString *)pathForSpatialOverCaptureContentFile;
- (NSString *)pathForVideoComplementSpatialOverCaptureContentFile;
- (<PLPTPTransferableAdditionalAssetAttributes> *)ptpAdditionalAttributes;
- (unsigned long long)ptpCloudMasterOriginalFileSize;
- (<PLPTPTransferableSidecarFile> *)ptpPhotoIrisSidecar;
- (NSSet *)ptpSidecarFiles;
- (short)savedAssetType;
- (struct CGSize { double x1; double x2; })spatialOverCaptureSize;
- (NSString *)uniformTypeIdentifier;
- (id)uuid;
- (struct CGSize { double x1; double x2; })videoComplementSpatialOverCaptureSize;
- (long long)width;

@end
