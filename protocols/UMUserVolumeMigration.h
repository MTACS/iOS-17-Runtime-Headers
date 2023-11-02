
@protocol UMUserVolumeMigration

@required

- (bool)migrateGuestUserVolume:(NSString *)arg1 withError:(id*)arg2;
- (bool)migrateSharedAndPrimaryUserVolumeWithError:(id*)arg1;

@end
