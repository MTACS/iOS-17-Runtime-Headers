
@interface CKAssetRepairOperationUtilities : NSObject

+ (void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)createRepairContainerFromContainer:(id)arg1;
+ (id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2;
+ (id)createRepairOperationGroupWithName:(id)arg1;
+ (bool)errorIsRetriableInNearFuture:(id)arg1;
+ (bool)errorShouldTriggerNetworkReachabilityEvent:(id)arg1;
+ (bool)repairErrorShouldBeMarkedAsBroken:(id)arg1;
+ (id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4;
+ (id)uploadRequestMetadataFromRepairRecord:(id)arg1;

@end
