
@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport {
    AVOutputDevice * _avOutputDevice;
    MRAirPlayTransportConnection * _connection;
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSError * _error;
    NSString * _groupID;
    NSString * _outputDeviceUID;
    bool  _useSystemAuthenticationPrompt;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

+ (id)_createConnectionWith:(id)arg1 groupID:(id)arg2 connectionType:(long long)arg3 shouldUseSystemAuthenticationPrompt:(bool)arg4 userInfo:(id)arg5;

- (void).cxx_destruct;
- (id)createConnectionWithUserInfo:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1 groupID:(id)arg2 connectionType:(long long)arg3;
- (id)name;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)resetWithError:(id)arg1;
- (void)setError:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end
