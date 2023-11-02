
@interface MRIDSCompanionTransport : MRExternalDeviceTransport {
    MRIDSCompanionTransportConnection * _connection;
    MRDeviceInfo * _deviceInfo;
    NSError * _error;
    MRAVOutputDevice * _outputDevice;
    NSString * _sessionUID;
    bool  _shouldUseSystemAuthenticationPrompt;
}

@property (nonatomic, retain) NSString *sessionUID;

- (void).cxx_destruct;
- (id)_generateSessionUID;
- (void)_handleDeviceConnected:(id)arg1;
- (void)_handleDeviceDisconnected:(id)arg1;
- (void)_synchronized_setSessionUID:(id)arg1;
- (id)createConnectionWithUserInfo:(id)arg1;
- (id)deviceInfo;
- (id)error;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1;
- (id)name;
- (long long)port;
- (void)resetWithError:(id)arg1;
- (id)sessionUID;
- (void)setSessionUID:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (bool)supportsIdleDisconnection;
- (id)uid;

@end
