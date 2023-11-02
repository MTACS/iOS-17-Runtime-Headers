
@interface HMDAuditHH2KeysForBackupOperation : HMDBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)persistent;
+ (id)predicate;
+ (void)recordCurrentBackupRunToUserDefault;
+ (void)resetHH2KeyBackupOperationFromUserDefault;
+ (bool)shouldWeScheduleHH2KeyBackupOperation;

- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;

@end
