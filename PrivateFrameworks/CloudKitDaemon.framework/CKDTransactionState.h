
@interface CKDTransactionState : NSObject {
    CKDAssetBatch * _assetBatch;
    NSMutableDictionary * _itemsByAssetId;
}

@property (nonatomic, retain) CKDAssetBatch *assetBatch;
@property (nonatomic, retain) NSMutableDictionary *itemsByAssetId;

- (void).cxx_destruct;
- (id)assetBatch;
- (id)init;
- (id)itemsByAssetId;
- (void)setAssetBatch:(id)arg1;
- (void)setItemsByAssetId:(id)arg1;

@end
