
@interface TRIFactorPackAssetFetchPlan : NSObject <NSCopying> {
    TRIGenericRequiredAssets * _metadataForRequestedUnlinkedAssets;
    NSDictionary * _recordIdsForDiffableAssetIds;
    NSDictionary * _recordIdsForNonDiffableAssetIds;
}

@property (nonatomic, readonly) TRIGenericRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (nonatomic, readonly) NSDictionary *recordIdsForDiffableAssetIds;
@property (nonatomic, readonly) NSDictionary *recordIdsForNonDiffableAssetIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)arg1 recordIdsForDiffableAssetIds:(id)arg2 recordIdsForNonDiffableAssetIds:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)arg1;
- (id)copyWithReplacementRecordIdsForDiffableAssetIds:(id)arg1;
- (id)copyWithReplacementRecordIdsForNonDiffableAssetIds:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)arg1 recordIdsForDiffableAssetIds:(id)arg2 recordIdsForNonDiffableAssetIds:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlan:(id)arg1;
- (id)metadataForRequestedUnlinkedAssets;
- (id)recordIdsForDiffableAssetIds;
- (id)recordIdsForNonDiffableAssetIds;

@end
