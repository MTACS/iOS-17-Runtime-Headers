
@interface VCPFaceMerger : NSObject {
    double  _mergeDistanceThreshold;
}

+ (bool)_allowANE;

- (void)_alignBoundingBoxOfFaces:(id)arg1 withRequestHandler:(id)arg2 orientedWidth:(unsigned long long)arg3 orientedHeight:(unsigned long long)arg4;
- (id)_alignFaceObservations:(id)arg1 withRequestHandler:(id)arg2 error:(id*)arg3;
- (id)_faceObservationsWithBoundingBoxFromFaces:(id)arg1 withFaceHashMapping:(id)arg2;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2;
- (id)initWithThreshold:(double)arg1;
- (id)mergeExistingFaces:(id)arg1 andDetectedFaces:(id)arg2 withRequestHandler:(id)arg3 orientedWidth:(unsigned long long)arg4 orientedHeight:(unsigned long long)arg5 assetWidth:(unsigned long long)arg6 assetHeight:(unsigned long long)arg7;

@end
