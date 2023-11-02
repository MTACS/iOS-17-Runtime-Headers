
@protocol PLLibraryClustererDelegate <NSObject>

@required

- (<PLMomentGenerationDataManagement> *)dataManager;
- (NSMutableArray *)libraryClusterer:(PLLibraryClusterer *)arg1 createMomentClustersForAssetClusters:(NSArray *)arg2 existingMomentDataForAssets:(NSSet *)arg3;
- (void)logRoutineInformation;

@end
