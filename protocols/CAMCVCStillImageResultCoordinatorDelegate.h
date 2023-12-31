
@protocol CAMCVCStillImageResultCoordinatorDelegate <NSObject>

@required

- (void)stillImagePersistenceCoordinator:(CAMCVCStillImageResultCoordinator *)arg1 requestsDispatchForResultSpecifiers:(unsigned long long)arg2 photoProperties:(NSDictionary *)arg3 videoProperties:(NSDictionary *)arg4 unfilteredPhotoProperties:(NSDictionary *)arg5 unfilteredVideoProperties:(NSDictionary *)arg6 assetAdjustments:(PFAssetAdjustments *)arg7 error:(NSError *)arg8;
- (void)stillImagePersistenceCoordinatorDidCompleteAllDispatches:(CAMCVCStillImageResultCoordinator *)arg1;

@end
