
@interface TRITreatmentRecordFetchPlan : NSObject <NSCopying> {
    NSIndexSet * _assetIndexes;
    CKRecordID * _recordId;
}

@property (nonatomic, readonly) NSIndexSet *assetIndexes;
@property (nonatomic, readonly) CKRecordID *recordId;

+ (id)planWithRecordId:(id)arg1 assetIndexes:(id)arg2;

- (void).cxx_destruct;
- (id)assetIndexes;
- (id)copyWithReplacementAssetIndexes:(id)arg1;
- (id)copyWithReplacementRecordId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRecordId:(id)arg1 assetIndexes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlan:(id)arg1;
- (id)recordId;

@end
