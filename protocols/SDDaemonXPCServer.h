
@protocol SDDaemonXPCServer

@required

- (void)canDeviceEnrollInBetaUpdates:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)canFileFeedbackOnDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)checkIn;
- (void)deleteSeedingAppleAccountForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enrollDevice:(void *)arg1 inProgram:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SDDevice *, SDBetaProgram *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enrolledBetaProgramForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SDBetaProgram *, void*
- (void)getCurrentDevice:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SDDevice *, void*
- (void)getCurrentPrimaryAppleIDForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getCurrentSeedingAppleIDForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getDevicesForPlatforms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)invalidateDaemonCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)isDeviceEnrolledInBetaProgram:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isDeviceUsingSeedingAppleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)queryProgramsForSystemAccountsWithPlatforms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, void*
- (void)setAppleAccountIdentifierFromAlternateDSID:(void *)arg1 forDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unenrollDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SDDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
