
@interface SDDaemon : NSObject <NSXPCListenerDelegate, SDDaemonXPCServer> {
    NSMutableDictionary * _appConnections;
    NSXPCListener * _listener;
    int  _profileToken;
    NSNumber * _userIdentifier;
}

@property (retain) NSMutableDictionary *appConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (nonatomic) int profileToken;
@property (readonly) Class superclass;
@property (retain) NSNumber *userIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connectionForPid:(id)arg1;
- (void)_releaseAppConnectionWithPid:(int)arg1;
- (void)_startListeningForProfileChanges;
- (void)_stopListeningForProfileChanges;
- (void)_storeAppConnection:(id)arg1;
- (void)_verifyCurrentDevice;
- (id)appConnections;
- (void)canDeviceEnrollInBetaUpdates:(id)arg1 completion:(id /* block */)arg2;
- (void)canFileFeedbackOnDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)checkIn;
- (void)dealloc;
- (void)deleteSeedingAppleAccountForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)enrollDevice:(id)arg1 inProgram:(id)arg2 completion:(id /* block */)arg3;
- (void)enrolledBetaProgramForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentDevice:(id /* block */)arg1;
- (void)getCurrentPrimaryAppleIDForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentSeedingAppleIDForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getDevicesForPlatforms:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)invalidateDaemonCacheWithCompletion:(id /* block */)arg1;
- (void)isDeviceEnrolledInBetaProgram:(id)arg1 completion:(id /* block */)arg2;
- (void)isDeviceUsingSeedingAppleID:(id)arg1 completion:(id /* block */)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)profileToken;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxyForPID:(id)arg1;
- (void)setAppConnections:(id)arg1;
- (void)setAppleAccountIdentifierFromAlternateDSID:(id)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)setListener:(id)arg1;
- (void)setProfileToken:(int)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)start;
- (void)unenrollDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)userIdentifier;

@end
