
@protocol ACXDeviceConnectionDelegate <NSObject>

@optional

- (void)applicationDatabaseResyncedForDeviceWithPairingID:(NSUUID *)arg1;
- (void)applicationsInstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUninstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUpdated:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)observerRegistered;
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 installPhase:(long long)arg3;
- (void)updateInstallStateForApplication:(NSString *)arg1 installState:(long long)arg2;

@end
