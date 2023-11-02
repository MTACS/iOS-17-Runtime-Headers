
@protocol VNClustererModelQuerying

@required

+ (NSArray *)clustererModelFileNamesFromState:(NSData *)arg1 storedInPath:(NSString *)arg2 error:(id*)arg3;
+ (NSNumber *)distanceBetweenFacesWithFaceObservation:(VNFaceObservation *)arg1 andFaceObservation:(VNFaceObservation *)arg2 error:(id*)arg3;
+ (NSNumber *)distanceBetweenFacesWithFaceprint:(VNFaceprint *)arg1 andFaceprint:(VNFaceprint *)arg2 error:(id*)arg3;
+ (NSUUID *)nonGroupedGroupID;
+ (NSDictionary *)representativenessForFaces:(NSArray *)arg1 error:(id*)arg2;

- (NSSet *)allClusteredFaceIdsAndReturnError:(id*)arg1;
- (NSArray *)clusteredFaceIdsForClusterContainingFaceId:(NSNumber *)arg1 error:(id*)arg2;
- (NSNumber *)distanceBetweenClustersWithFaceId:(NSNumber *)arg1 andFaceId:(NSNumber *)arg2 error:(id*)arg3;
- (NSDictionary *)distanceBetweenLevel1Clusters:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)getAllClustersAndReturnError:(id*)arg1;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(NSArray *)arg1 error:(id*)arg2;
- (NSNumber *)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (NSArray *)suggestionsForClustersWithFaceIds:(NSDictionary *)arg1 affinityThreshold:(float)arg2 canceller:(VNCanceller *)arg3 error:(id*)arg4;

@end
