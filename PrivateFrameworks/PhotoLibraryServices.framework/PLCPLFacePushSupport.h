
@interface PLCPLFacePushSupport : NSObject {
    <PLSyncContext> * _syncContext;
}

+ (bool)_shouldPushBeingKeyFace:(id)arg1;
+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3;
+ (bool)isFaceSyncable:(id)arg1;
+ (void)markSyncableFacesAsPushedInAsset:(id)arg1;

- (void).cxx_destruct;
- (bool)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long*)arg2;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long*)arg2;
- (id)initWithSyncContext:(id)arg1;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;

@end
