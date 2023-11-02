
@interface HMDHomePrimaryResidentInitialReachabilityManagerDataSource : NSObject <HMDHomePrimaryResidentInitialReachabilityManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dataValueFromNoBackupStoreWithKey:(id)arg1;
- (void)persistDataValueToNoBackupStore:(id)arg1 withKey:(id)arg2;

@end
