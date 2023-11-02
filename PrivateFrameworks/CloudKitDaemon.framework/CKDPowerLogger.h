
@interface CKDPowerLogger : NSObject

+ (bool)isEnabled;
+ (id)sharedLogger;

- (void)logOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 xpcActivityIdentifier:(id)arg8 appContainerTuple:(id)arg9;
- (id)zoneIDsToZoneNamesString:(id)arg1;

@end
