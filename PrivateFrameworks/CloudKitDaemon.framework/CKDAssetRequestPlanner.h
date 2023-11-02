
@interface CKDAssetRequestPlanner : NSObject {
    NSMutableDictionary * _assetBatchesByZoneID;
    NSArray * _assetGetChunkKeysBatches;
    NSArray * _assetRegisterAndPutBatches;
    unsigned int  _assetTokenRequestSizeLimit;
    NSArray * _assetTokenRequests;
    NSMutableDictionary * _assetZoneByKey;
    NSMutableOrderedSet * _items;
    unsigned long long  _mmcsEncryptionSupport;
    NSMutableDictionary * _rerefAssetBatchesByZoneID;
}

@property (nonatomic, retain) NSMutableDictionary *assetBatchesByZoneID;
@property (nonatomic, retain) NSArray *assetGetChunkKeysBatches;
@property (retain) NSArray *assetRegisterAndPutBatches;
@property (nonatomic, readonly) unsigned int assetTokenRequestSizeLimit;
@property (nonatomic, retain) NSArray *assetTokenRequests;
@property (nonatomic, retain) NSMutableDictionary *assetZoneByKey;
@property (nonatomic, retain) NSMutableOrderedSet *items;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (nonatomic, retain) NSMutableDictionary *rerefAssetBatchesByZoneID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)assetBatchesByZoneID;
- (id)assetGetChunkKeysBatches;
- (id)assetRegisterAndPutBatches;
- (unsigned int)assetTokenRequestSizeLimit;
- (id)assetTokenRequests;
- (id)assetZoneByKey;
- (id)description;
- (void)failBatch:(id)arg1;
- (bool)hasSuccessfulAssetTokenRequests;
- (bool)hasSuccessfulBatches;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)mmcsEncryptionSupport;
- (void)planAssetRequests;
- (void)planGetChunkKeysBatches;
- (void)planRegisterBatches;
- (id)rerefAssetBatchesByZoneID;
- (void)resetAssetTokenRequests;
- (void)setAssetBatchesByZoneID:(id)arg1;
- (void)setAssetGetChunkKeysBatches:(id)arg1;
- (void)setAssetRegisterAndPutBatches:(id)arg1;
- (void)setAssetTokenRequests:(id)arg1;
- (void)setAssetZoneByKey:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMmcsEncryptionSupport:(unsigned long long)arg1;
- (void)setRerefAssetBatchesByZoneID:(id)arg1;

@end
