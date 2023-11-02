
@interface MDMClientCore : NSObject {
    unsigned long long  _channelType;
    <MDMClientDataProvider> * _dataProvider;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionSyncQueue;
}

@property (nonatomic) unsigned long long channelType;
@property (nonatomic, retain) <MDMClientDataProvider> *dataProvider;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)clientWithChannelType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_destroyXPCConnectionAndInvalidate:(bool)arg1;
- (id)_deviceEnrollmentAuthenticationDict;
- (void)_queue_createAndStartMDMXPCConnection;
- (id)_userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1;
- (id)_userFieldsForResponse;
- (unsigned long long)accessRights;
- (bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 topic:(id)arg5 useDevelopmentAPNS:(bool)arg6 signMessage:(bool)arg7 isUserEnrollment:(bool)arg8 enrollmentID:(id)arg9 outError:(id*)arg10;
- (void)blockAppInstallsWithCompletion:(id /* block */)arg1;
- (unsigned long long)channelType;
- (bool)checkInRequestAtURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 signMessage:(bool)arg5 isUserEnrollment:(bool)arg6 enrollmentID:(id)arg7 messageType:(id)arg8 requestDict:(id)arg9 outResponse:(id*)arg10 outError:(id*)arg11;
- (bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 topic:(id)arg5 signMessage:(bool)arg6 isUserEnrollment:(bool)arg7 enrollmentID:(id)arg8 outError:(id*)arg9;
- (id)dataProvider;
- (void)dealloc;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (id)initWithChannelType:(unsigned long long)arg1;
- (id)initWithChannelType:(unsigned long long)arg1 dataProvider:(id)arg2;
- (bool)isActivationLockAllowedWhileSupervised;
- (bool)isAwaitingUserConfigured;
- (void)migrateMDMWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (void)processUserRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (id)pushToken;
- (void)reauthenticationComplete;
- (bool)remoteManagementCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 signMessage:(bool)arg5 isUserEnrollment:(bool)arg6 enrollmentID:(id)arg7 endpoint:(id)arg8 requestData:(id)arg9 outResponse:(id*)arg10 outError:(id*)arg11;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)arg1;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)setChannelType:(unsigned long long)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)arg1;
- (void)simulatePushWithCompletion:(id /* block */)arg1;
- (void)touchWithCompletion:(id /* block */)arg1;
- (void)unblockAppInstallsWithCompletion:(id /* block */)arg1;
- (void)uprootMDM;
- (id)xpcConnection;
- (id)xpcConnectionSyncQueue;

@end
