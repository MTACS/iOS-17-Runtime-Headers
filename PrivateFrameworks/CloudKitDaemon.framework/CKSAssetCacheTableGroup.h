
@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup {
    CKDAssetHandleTable * _assetHandleTable;
    CKDAssetVolumeTable * _assetVolumeTable;
}

@property (nonatomic, readonly) CKDAssetHandleTable *assetHandleTable;
@property (nonatomic, readonly) CKDAssetVolumeTable *assetVolumeTable;

+ (bool)rebootShouldClearData;

- (void).cxx_destruct;
- (id)assetHandleTable;
- (id)assetVolumeTable;
- (id)createTables:(id*)arg1;

@end
