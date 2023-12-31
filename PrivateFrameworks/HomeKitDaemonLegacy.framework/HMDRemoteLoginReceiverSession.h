
@interface HMDRemoteLoginReceiverSession : HMFObject {
    id /* block */  _completion;
    HMDRemoteLoginAuthentication * _remoteAuthentication;
    NSString * _sessionID;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) HMDRemoteLoginAuthentication *remoteAuthentication;
@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteAuthentication;
- (id)sessionID;

@end
