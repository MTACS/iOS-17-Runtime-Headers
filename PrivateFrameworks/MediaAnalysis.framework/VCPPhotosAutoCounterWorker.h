
@interface VCPPhotosAutoCounterWorker : NSObject {
    unsigned long long  _clusterDumpFaceFetched;
    unsigned long long  _detectionVersion;
    unsigned long long  _madVersion;
    unsigned long long  _personClusterVersion;
    PHPhotoLibrary * _photoLibrary;
    int  _processingVersion;
    unsigned long long  _recognitionVersion;
    unsigned long long  _vuVersion;
}

+ (bool)_dumpAssetsToFaces;
+ (bool)_dumpFaceprint;
+ (id)workerWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_anonymizedName:(id)arg1;
- (void)_exportAssetsToFacesDetails:(id)arg1;
- (id)_fetchPeopleHomePersons;
- (void)_fetchPersonWithIdentifier:(id)arg1 facesPerAsset:(id)arg2 assetInformation:(id)arg3 extendTimeoutBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (id)_groundTruthURL;
- (int)_loadGroundTruth:(id*)arg1 error:(id*)arg2;
- (int)_loadGroundTruthURL:(id)arg1 toGroundTruth:(id*)arg2 error:(id*)arg3;
- (int)_measureClusterWithClusterStateURL:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id*)arg6 extendTimeoutBlock:(id /* block */)arg7 cancelBlock:(id /* block */)arg8;
- (int)_measurePNPersonClusters:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id*)arg6 extendTimeoutBlock:(id /* block */)arg7 cancelBlock:(id /* block */)arg8;
- (double)_overlapRatioOf:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 with:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)_parseGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id*)arg2 personInformation:(id*)arg3 faceToPerson:(id*)arg4 assetToFaces:(id*)arg5 extendTimeoutBlock:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (int)_parseSIMLGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id*)arg2 personInformation:(id*)arg3 faceToPerson:(id*)arg4 assetToFaces:(id*)arg5 extendTimeoutBlock:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (int)_processFetchedFaceGroup:(id)arg1 forPersonID:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (int)_processFetchedVURawCluster:(id)arg1 forPersonLocalIdentifier:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)arg1 personClusterMeasure:(id)arg2 personClusters:(id)arg3 andGroundTruthInformation:(id)arg4;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 results:(id*)arg3 extendTimeoutBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 withGroundtruth:(id)arg3 results:(id*)arg4 extendTimeoutBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (int)exportClustersStates:(id*)arg1 error:(id*)arg2 extendTimeoutBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (int)exportVUGalleryClusterStates:(id*)arg1 error:(id*)arg2 extendTimeoutBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)optInPersonCount;
- (bool)optInStatus:(id)arg1 error:(id*)arg2;
- (bool)optInUserPickedPerson:(id)arg1 error:(id*)arg2 extendTimeoutBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (int)validateClusterAccuracyWithSIMLGroundtruth:(id)arg1 results:(id*)arg2 extendTimeoutBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;

@end
