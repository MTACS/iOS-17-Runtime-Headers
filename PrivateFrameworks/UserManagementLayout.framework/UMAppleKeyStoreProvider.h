
@interface UMAppleKeyStoreProvider : NSObject <UMAppleKeyStoreProviding> {
    bool  _ignoreIdentityMethods;
}

@property (nonatomic) bool ignoreIdentityMethods;

- (bool)addPersonaWithUUID:(id)arg1 toSession:(unsigned int)arg2 passcode:(id)arg3 error:(id*)arg4;
- (bool)bootstrapVolumeWithMountPoint:(id)arg1 user:(unsigned int)arg2 error:(id*)arg3;
- (bool)createIdentityWithUUID:(id)arg1 passcode:(id)arg2 existingSession:(unsigned int)arg3 existingSessionPasscode:(id)arg4 error:(id*)arg5;
- (id)dataUnwrappingDataWithDeviceClassF:(id)arg1 error:(id*)arg2;
- (id)dataWrappingDataWithDeviceClassF:(id)arg1 error:(id*)arg2;
- (bool)deleteIdentity:(id)arg1 error:(id*)arg2;
- (bool)deletePersonaWithUUID:(id)arg1 fromSession:(unsigned int)arg2 error:(id*)arg3;
- (bool)ignoreIdentityMethods;
- (bool)isIdentityLoadedIntoSession:(unsigned int)arg1;
- (bool)loadIdentity:(id)arg1 intoSession:(unsigned int)arg2 error:(id*)arg3;
- (bool)loginIdentity:(id)arg1 intoSession:(unsigned int)arg2 passcode:(id)arg3 error:(id*)arg4;
- (bool)mapVolume:(id)arg1 toSession:(unsigned int)arg2 withPersona:(id)arg3 error:(id*)arg4;
- (void)setIgnoreIdentityMethods:(bool)arg1;
- (bool)unloadIdentityFromSession:(unsigned int)arg1 error:(id*)arg2;
- (bool)unlockIdentityInSession:(unsigned int)arg1 passcode:(id)arg2 error:(id*)arg3;
- (bool)unmapVolume:(id)arg1 error:(id*)arg2;

@end
