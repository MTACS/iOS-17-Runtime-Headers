
@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication {
    HMDRemoteLoginProxyAuthenticationRequest * _request;
}

@property (nonatomic, readonly) HMDRemoteLoginProxyAuthenticationRequest *request;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_authenticate;
- (void)authenticate;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;
- (id)request;

@end
