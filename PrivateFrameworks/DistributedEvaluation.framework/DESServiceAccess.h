
@interface DESServiceAccess : NSObject

+ (bool)hasMLRCtlEntitlement:(id)arg1;
+ (bool)hasOnDemandLaunchEntitlement:(id)arg1;
+ (bool)hasRecordAccessToBundleId:(id)arg1 connection:(id)arg2 error:(id*)arg3;
+ (bool)hasToolEntitlement:(id)arg1;

@end
