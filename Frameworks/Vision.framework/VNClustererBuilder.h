
@interface VNClustererBuilder : NSObject <VNClustererModelBuilding, VNClustererModelQuerying> {
    <VNClustererModelQuerying><VNClustererModelBuilding> * _context;
}

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (id)clustererBuilderWithOptions:(id)arg1 error:(id*)arg2;
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3;
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3;
+ (id)nonGroupedGroupID;
+ (id)representativenessForFaces:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)allClusteredFaceIdsAndReturnError:(id*)arg1;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2;
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
- (id)getAllClustersAndReturnError:(id*)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 torsoprintRequestRevision:(unsigned long long)arg6 error:(id*)arg7;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7 error:(id*)arg8;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2;
- (id)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (bool)resetModelState:(id)arg1 error:(id*)arg2;
- (id)saveAndReturnCurrentModelState:(id*)arg1;
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
- (id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id*)arg5;
- (id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)updateModelByAddingPersons:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingPersons:(id)arg3 canceller:(id)arg4 error:(id*)arg5;
- (id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (id)vcp_updateModelByAddingFaces:(id)arg1 error:(id*)arg2;

@end
