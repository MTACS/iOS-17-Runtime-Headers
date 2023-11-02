
@interface PLCameraPreviewWellAssetChange : NSObject {
    NSDate * _addedDate;
    bool  _allowed;
    NSString * _assetUUID;
    unsigned long long  _effectiveThumbnailIndex;
    bool  _shouldRefreshPreviewWellWithFetchRequest;
    double  _sortToken;
    NSString * _thumbnailIdentifier;
    bool  _thumbnailWasGenerated;
}

@property (nonatomic, copy) NSDate *addedDate;
@property (getter=isAllowed, nonatomic) bool allowed;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic) unsigned long long effectiveThumbnailIndex;
@property (nonatomic) bool shouldRefreshPreviewWellWithFetchRequest;
@property (nonatomic) double sortToken;
@property (nonatomic, copy) NSString *thumbnailIdentifier;
@property (nonatomic) bool thumbnailWasGenerated;

+ (id)cameraPreviewWellAssetChangeToForceRefetch;

- (void).cxx_destruct;
- (id)addedDate;
- (id)assetUUID;
- (long long)compare:(id)arg1;
- (long long)compareToDate:(id)arg1 sortToken:(double)arg2;
- (unsigned long long)effectiveThumbnailIndex;
- (id)initWithManagedAsset:(id)arg1 thumbnailWasGenerated:(bool)arg2;
- (bool)isAllowed;
- (void)setAddedDate:(id)arg1;
- (void)setAllowed:(bool)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setEffectiveThumbnailIndex:(unsigned long long)arg1;
- (void)setShouldRefreshPreviewWellWithFetchRequest:(bool)arg1;
- (void)setSortToken:(double)arg1;
- (void)setThumbnailIdentifier:(id)arg1;
- (void)setThumbnailWasGenerated:(bool)arg1;
- (bool)shouldRefreshPreviewWellWithFetchRequest;
- (double)sortToken;
- (id)thumbnailIdentifier;
- (bool)thumbnailWasGenerated;

@end
