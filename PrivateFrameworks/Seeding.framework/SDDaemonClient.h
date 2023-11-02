
@interface SDDaemonClient : NSObject <SDDaemonXPCClient> {
    NSXPCConnection * _daemonConnection;
}

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canCurrentDeviceEnrollInBetaProgram;
- (void)canFileFeedbackOnDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)daemonConnection;
- (id)daemonRemoteObjectProxy;
- (void)deleteSeedingAppleAccountWithCompletion:(id /* block */)arg1;
- (id)deviceAppleIDUsernameForCurrentDevice;
- (void)enrollDevice:(id)arg1 inProgram:(id)arg2 completion:(id /* block */)arg3;
- (void)enrolledBetaProgramForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentDevice:(id /* block */)arg1;
- (id)getCurrentDeviceEnrolledBetaProgramSynchronously;
- (id)getCurrentDeviceSynchronously;
- (void)getDevicesForPlatforms:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)initializeDaemonConnection;
- (void)invalidateCacheWithCompletion:(id /* block */)arg1;
- (bool)isCurrentDeviceUsingSeedingAppleID;
- (void)isDeviceEnrolledInBetaProgram:(id)arg1 completion:(id /* block */)arg2;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)seedingAppleIDUsernameForCurrentDevice;
- (void)setAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)setDaemonConnection:(id)arg1;
- (id)synchronousDaemonRemoteObjectProxy;
- (void)unenrollDevice:(id)arg1 completion:(id /* block */)arg2;

@end
