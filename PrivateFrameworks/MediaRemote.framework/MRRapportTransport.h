
@interface MRRapportTransport : MRExternalDeviceTransport {
    MRCompanionLinkClient * _client;
    MRExternalDeviceTransportConnection * _connection;
    id  _disconnectToken;
    NSError * _error;
    MRAVOutputDevice * _outputDevice;
    MRAVOutputDevice * _proxyOutputDevice;
    id  _resetToken;
    NSString * _sessionUID;
    RPCompanionLinkDevice * _targetDevice;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) MRExternalDeviceTransportConnection *connection;
@property (nonatomic, retain) NSString *sessionUID;
@property (nonatomic, retain) RPCompanionLinkDevice *targetDevice;

+ (id)_readConnectionRecordsFromDisk;
+ (void)_writeConnectionRecordsToDisk:(id)arg1;
+ (void)resetPersistedConnections;
+ (id)userDefaults;

- (void).cxx_destruct;
- (id)_generateSessionUID;
- (void)_persistConnectionRecordToDisk;
- (void)_removeConnectionRecordFromDisk;
- (id)connection;
- (id)createConnectionWithUserInfo:(id)arg1;
- (void)dealloc;
- (id)deviceInfo;
- (id)error;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1;
- (id)initWithOutputDevice:(id)arg1 proxyOutputDevice:(id)arg2;
- (id)name;
- (long long)port;
- (void)resetWithError:(id)arg1;
- (id)sessionUID;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSessionUID:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (void)setTargetDevice:(id)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)targetDevice;
- (id)uid;

@end
