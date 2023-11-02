
@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling> {
    id /* block */  _refreshHandler;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id /* block */ refreshHandler;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)fetchUserInfo:(id /* block */)arg1;
- (void)handleMessage:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)initWithUserInfo:(id)arg1 refreshHandler:(id /* block */)arg2;
- (id /* block */)refreshHandler;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)userInfo;

@end
