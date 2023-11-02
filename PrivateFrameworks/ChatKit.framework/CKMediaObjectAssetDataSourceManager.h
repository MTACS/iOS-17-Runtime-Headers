
@interface CKMediaObjectAssetDataSourceManager : PXAssetsDataSourceManager {
    struct { 
        unsigned long long count; 
        long long type; 
    }  _additionalItemsCount;
    CKMediaObjectAssetDataSource * _mediaObjectDataSource;
    PHMomentShare * _momentShare;
    NSURL * _momentShareURL;
}

@property (setter=_setAdditionalItemsCount:, nonatomic) struct { unsigned long long x1; long long x2; } additionalItemsCount;
@property (nonatomic, retain) CKMediaObjectAssetDataSource *mediaObjectDataSource;
@property (nonatomic, retain) PHMomentShare *momentShare;
@property (nonatomic, retain) NSURL *momentShareURL;

- (void).cxx_destruct;
- (struct { unsigned long long x1; long long x2; })_additionalCountInMomentShare:(id)arg1 representedCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (id)_changeDetailsForDataSource:(id)arg1 oldDataSource:(id)arg2;
- (void)_handleMomentShareCacheDidChange:(id)arg1;
- (void)_handlePreviewDidChangeNotification:(id)arg1;
- (void)_mq_handlePreviewDidChangeNotification:(id)arg1;
- (void)_setAdditionalItemsCount:(struct { unsigned long long x1; long long x2; })arg1;
- (void)_updateAdditionalItemsCount;
- (void)_updateMomentShare;
- (struct { unsigned long long x1; long long x2; })additionalItemsCount;
- (id)createInitialDataSource;
- (id)initWithDataSource:(id)arg1;
- (id)mediaObjectDataSource;
- (id)momentShare;
- (id)momentShareURL;
- (void)setMediaObjectDataSource:(id)arg1;
- (void)setMediaObjectDataSource:(id)arg1 withChangeDetails:(id)arg2;
- (void)setMomentShare:(id)arg1;
- (void)setMomentShareURL:(id)arg1;

@end
