
@protocol MRMigrationDeviceDelegate <NSObject>

@required

- (void)device:(MRMigrationDevice *)arg1 playerStateDidChange:(MRNowPlayingPlayerResponse *)arg2;
- (void)device:(MRMigrationDevice *)arg1 stateDidChange:(unsigned long long)arg2;

@end
