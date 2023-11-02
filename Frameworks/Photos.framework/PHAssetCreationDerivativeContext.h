
@interface PHAssetCreationDerivativeContext : NSObject {
    PLManagedAsset * _asset;
    NSString * _assetExtension;
    short  _assetKind;
    long long  _assetOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _assetOrientedImageSize;
    NSString * _assetUUID;
    NSArray * _auxiliaryImageRecords;
    struct CGSize { 
        double width; 
        double height; 
    }  _embeddedThumbnailSize;
    NSURL * _fileURLForThumbnailFile;
    NSString * _fullsizeRenderImagePath;
    NSString * _fullsizeRenderVideoPath;
    NSData * _imageData;
    long long  _maxPixelSize;
    long long  _nextAvailableThumbnailIndex;
    NSData * _originalHash;
    NSString * _originalUTI;
    NSString * _pathForOriginalFile;
    NSString * _pathForVideoPreviewFile;
    NSString * _thumbnailIdentifier;
    PLThumbnailManager * _thumbnailManager;
    bool  _thumbnailWriteSucceeded;
}

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, copy) NSString *assetExtension;
@property (nonatomic) short assetKind;
@property (nonatomic) long long assetOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } assetOrientedImageSize;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic, retain) NSArray *auxiliaryImageRecords;
@property (nonatomic) struct CGSize { double x1; double x2; } embeddedThumbnailSize;
@property (nonatomic, retain) NSURL *fileURLForThumbnailFile;
@property (nonatomic, copy) NSString *fullsizeRenderImagePath;
@property (nonatomic, copy) NSString *fullsizeRenderVideoPath;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) long long maxPixelSize;
@property (nonatomic) long long nextAvailableThumbnailIndex;
@property (nonatomic, retain) NSData *originalHash;
@property (nonatomic, copy) NSString *originalUTI;
@property (nonatomic, copy) NSString *pathForOriginalFile;
@property (nonatomic, copy) NSString *pathForVideoPreviewFile;
@property (nonatomic, copy) NSString *thumbnailIdentifier;
@property (nonatomic, retain) PLThumbnailManager *thumbnailManager;
@property (nonatomic) bool thumbnailWriteSucceeded;

- (void).cxx_destruct;
- (id)asset;
- (id)assetExtension;
- (short)assetKind;
- (long long)assetOrientation;
- (struct CGSize { double x1; double x2; })assetOrientedImageSize;
- (id)assetUUID;
- (id)auxiliaryImageRecords;
- (struct CGSize { double x1; double x2; })embeddedThumbnailSize;
- (id)fileURLForThumbnailFile;
- (id)fullsizeRenderImagePath;
- (id)fullsizeRenderVideoPath;
- (id)imageData;
- (long long)maxPixelSize;
- (long long)nextAvailableThumbnailIndex;
- (id)originalHash;
- (id)originalUTI;
- (id)pathForOriginalFile;
- (id)pathForVideoPreviewFile;
- (void)setAsset:(id)arg1;
- (void)setAssetExtension:(id)arg1;
- (void)setAssetKind:(short)arg1;
- (void)setAssetOrientation:(long long)arg1;
- (void)setAssetOrientedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setAuxiliaryImageRecords:(id)arg1;
- (void)setEmbeddedThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFileURLForThumbnailFile:(id)arg1;
- (void)setFullsizeRenderImagePath:(id)arg1;
- (void)setFullsizeRenderVideoPath:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setMaxPixelSize:(long long)arg1;
- (void)setNextAvailableThumbnailIndex:(long long)arg1;
- (void)setOriginalHash:(id)arg1;
- (void)setOriginalUTI:(id)arg1;
- (void)setPathForOriginalFile:(id)arg1;
- (void)setPathForVideoPreviewFile:(id)arg1;
- (void)setThumbnailIdentifier:(id)arg1;
- (void)setThumbnailManager:(id)arg1;
- (void)setThumbnailWriteSucceeded:(bool)arg1;
- (id)thumbnailIdentifier;
- (id)thumbnailManager;
- (bool)thumbnailWriteSucceeded;

@end
