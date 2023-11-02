
@protocol UMAppleKeyStoreProviding

@required

- (bool)addPersonaWithUUID:(NSUUID *)arg1 toSession:(unsigned int)arg2 passcode:(NSData *)arg3 error:(id*)arg4;
- (bool)bootstrapVolumeWithMountPoint:(NSString *)arg1 user:(unsigned int)arg2 error:(id*)arg3;
- (bool)createIdentityWithUUID:(NSUUID *)arg1 passcode:(NSData *)arg2 existingSession:(unsigned int)arg3 existingSessionPasscode:(NSData *)arg4 error:(id*)arg5;
- (NSData *)dataUnwrappingDataWithDeviceClassF:(NSData *)arg1 error:(id*)arg2;
- (NSData *)dataWrappingDataWithDeviceClassF:(NSData *)arg1 error:(id*)arg2;
- (bool)deleteIdentity:(NSUUID *)arg1 error:(id*)arg2;
- (bool)deletePersonaWithUUID:(NSUUID *)arg1 fromSession:(unsigned int)arg2 error:(id*)arg3;
- (bool)ignoreIdentityMethods;
- (bool)isIdentityLoadedIntoSession:(unsigned int)arg1;
- (bool)loadIdentity:(NSUUID *)arg1 intoSession:(unsigned int)arg2 error:(id*)arg3;
- (bool)loginIdentity:(NSUUID *)arg1 intoSession:(unsigned int)arg2 passcode:(NSData *)arg3 error:(id*)arg4;
- (bool)mapVolume:(NSString *)arg1 toSession:(unsigned int)arg2 withPersona:(NSUUID *)arg3 error:(id*)arg4;
- (void)setIgnoreIdentityMethods:(bool)arg1;
- (bool)unloadIdentityFromSession:(unsigned int)arg1 error:(id*)arg2;
- (bool)unlockIdentityInSession:(unsigned int)arg1 passcode:(NSData *)arg2 error:(id*)arg3;
- (bool)unmapVolume:(NSString *)arg1 error:(id*)arg2;

@end
