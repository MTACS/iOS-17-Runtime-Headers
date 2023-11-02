
@protocol ACXDeviceConnectionDelegateProtocol <NSObject>

@required

- (void)applicationDatabaseResyncedForDeviceWithPairingID:(NSUUID *)arg1;
- (void)applicationsInstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUninstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUpdated:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)observerRegistrationSuccessful;
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatedInstallStateForApplicationsWithInfo:(NSDictionary *)arg1;

@end
