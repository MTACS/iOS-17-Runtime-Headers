
@interface VCPFaceClusterer : NSObject {
    id /* block */  _cancelOrExtendTimeoutBlock;
    VCPClusterer * _clusterer;
    VCPPhotosFaceProcessingContext * _context;
    PHPhotoLibrary * _photoLibrary;
}

- (void).cxx_destruct;
- (bool)_resetFaceClusteringState:(id*)arg1;
- (int)clusterFaces;
- (int)clusterFacesIfNecessary;
- (id)clusterer;
- (bool)clustererIsReadyToReturnSuggestions;
- (unsigned long long)clustererState;
- (bool)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(bool*)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 error:(id*)arg5;
- (id)initWithPhotoLibrary:(id)arg1 context:(id)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3;
- (unsigned long long)numberOfFacesPendingClustering;
- (bool)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(bool)arg2 error:(id*)arg3;
- (bool)resetFaceClusteringState:(id*)arg1;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1;

@end
