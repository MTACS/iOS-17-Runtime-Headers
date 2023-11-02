
@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile * _cameraFile;
}

@property (nonatomic, readonly) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)arg1 source:(id)arg2;
+ (void)validateCameraFile:(id)arg1;

- (void).cxx_destruct;
- (int)burstPickType;
- (id)burstUUID;
- (id)cameraFiles;
- (bool)canDelete;
- (bool)canPreserveFolderStructure;
- (bool)canReference;
- (bool)containsDateKey:(id)arg1;
- (void)copyToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createMetadataFromProperties:(id)arg1;
- (id)creationDate;
- (id)durationTimeInterval;
- (struct CGSize { double x1; double x2; })exifPixelSize;
- (id)fingerprint;
- (bool)hasAudioAttachment;
- (id)initWithSource:(id)arg1 cameraFile:(id)arg2 type:(id)arg3 supportedMediaType:(unsigned char)arg4;
- (bool)isBase;
- (bool)isLivePhoto;
- (bool)isRAW;
- (bool)isRender;
- (bool)isSloMo;
- (bool)isSpatialOverCapture;
- (bool)isTagged;
- (bool)isViewable;
- (id)livePhotoPairingIdentifier;
- (void)loadMetadataAsync:(id /* block */)arg1;
- (void)loadMetadataSync;
- (id)nameKey;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })orientedPixelSize;
- (id)originatingAssetID;
- (id)parentFolderPath;
- (bool)performAdditionalLivePhotoChecksWithImageAsset:(id)arg1;
- (id)representedObject;
- (id)securityScopedURL;
- (id)spatialOverCaptureIdentifier;
- (void)thumbnailUsingRequest:(id)arg1 atEnd:(id /* block */)arg2;

@end
