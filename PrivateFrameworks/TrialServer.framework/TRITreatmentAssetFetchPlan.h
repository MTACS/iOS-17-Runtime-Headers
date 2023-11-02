
@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying> {
    NSDictionary * _fetchPlansForTreatmentIds;
    TRIGenericUniqueRequiredAssets * _metadataForRequestedUnlinkedAssets;
}

@property (nonatomic, readonly) NSDictionary *fetchPlansForTreatmentIds;
@property (nonatomic, readonly) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)arg1 fetchPlansForTreatmentIds:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)arg1;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fetchPlansForTreatmentIds;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)arg1 fetchPlansForTreatmentIds:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlan:(id)arg1;
- (id)metadataForRequestedUnlinkedAssets;

@end
