
@interface TRIClientTreatment : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *factorLevelArray;
@property (nonatomic, readonly) unsigned long long factorLevelArray_Count;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, copy) NSString *treatmentId;

// Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

+ (id)descriptor;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (id)assetURLsFromCKRecord:(id)arg1 assetIndexes:(id)arg2;
+ (id)treatmentFromCKRecord:(id)arg1 treatmentSize:(unsigned long long*)arg2;

- (id)_triCollectMetadataForAssetsWithTest:(id /* block */)arg1;
- (bool)_triEnumerateMAFactorLevelsWithBlock:(id /* block */)arg1;
- (id)_triRequiredCKAssetsForInstallationWithAssetStore:(id)arg1 subscriptionSettings:(id)arg2 aliasToUnaliasMap:(id)arg3;
- (id)_triRequiredMAAssetsForInstallationWithAssetStore:(id)arg1 subscriptionSettings:(id)arg2 maProvider:(id)arg3 aliasToUnaliasMap:(id)arg4;
- (id)requiredAssetsForInstallationForNamespace:(id)arg1 assetStore:(id)arg2 maProvider:(id)arg3 subscriptionSettings:(id)arg4 aliasToUnaliasMap:(id)arg5;
- (id)unlinkedOnDemandAssets;

@end
