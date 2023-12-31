
@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication {
    HMDRemoteLoginCompanionAuthenticationRequest * _request;
}

@property (nonatomic, readonly) HMDRemoteLoginCompanionAuthenticationRequest *request;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_authenticate;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(bool)arg2 withCompanionDevice:(id)arg3;
- (void)authenticate;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;
- (id)request;

@end
