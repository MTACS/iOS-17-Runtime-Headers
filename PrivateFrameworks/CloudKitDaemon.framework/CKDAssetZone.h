
@interface CKDAssetZone : NSObject {
    NSMutableOrderedSet * _assetRecords;
    NSMutableDictionary * _assetRecordsByRecordID;
    CKDAssetZoneKey * _assetZoneKey;
}

@property (nonatomic, retain) NSMutableOrderedSet *assetRecords;
@property (nonatomic, retain) NSMutableDictionary *assetRecordsByRecordID;
@property (nonatomic, retain) CKDAssetZoneKey *assetZoneKey;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)assetRecords;
- (id)assetRecordsByRecordID;
- (id)assetZoneKey;
- (id)description;
- (id)initWithAssetZoneKey:(id)arg1;
- (void)setAssetRecords:(id)arg1;
- (void)setAssetRecordsByRecordID:(id)arg1;
- (void)setAssetZoneKey:(id)arg1;

@end
