
@protocol HMDHomePrimaryResidentInitialReachabilityManagerDataSource <NSObject>

@required

- (NSData *)dataValueFromNoBackupStoreWithKey:(NSString *)arg1;
- (void)persistDataValueToNoBackupStore:(NSData *)arg1 withKey:(NSString *)arg2;

@end
