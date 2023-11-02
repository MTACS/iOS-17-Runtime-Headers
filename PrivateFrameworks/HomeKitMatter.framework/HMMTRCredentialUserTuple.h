
@interface HMMTRCredentialUserTuple : NSObject {
    MTRDoorLockClusterGetCredentialStatusResponseParams * _credential;
    NSNumber * _currentFabricIndex;
    MTRDoorLockClusterGetUserResponseParams * _user;
}

@property (retain) MTRDoorLockClusterGetCredentialStatusResponseParams *credential;
@property (retain) NSNumber *currentFabricIndex;
@property (retain) MTRDoorLockClusterGetUserResponseParams *user;

- (void).cxx_destruct;
- (id)credential;
- (id)currentFabricIndex;
- (void)setCredential:(id)arg1;
- (void)setCurrentFabricIndex:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;

@end
