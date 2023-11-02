
@interface FAInvokeMessageHook : NSObject <AAUIServerHook, FAInviteControllerDelegate> {
    id /* block */  _completion;
    <RUIServerHookDelegate> * _delegate;
    NSObject<FAInviteConfigurationController> * _messageConfigurationController;
    RUIObjectModel * _objectModel;
    FACircleRemoteUIDelegate * _remoteUIDelegate;
    RUIServerHookResponse * _serverHookResponse;
    FAInviteContext * _testContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic) FACircleRemoteUIDelegate *remoteUIDelegate;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentMessagesInviteWithServerAttributes:(id)arg1 transport:(long long)arg2 sourceView:(id)arg3 completion:(id /* block */)arg4;
- (id)_stringForCompletionStatus:(unsigned long long)arg1;
- (id)delegate;
- (void)dismissWithUserInfo:(id)arg1;
- (void)inviteController:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(id)arg3 userInfo:(id)arg4 error:(id)arg5;
- (void)inviteControllerDidEndAsyncLoading:(id)arg1;
- (void)inviteControllerDidStartAsyncLoading:(id)arg1;
- (id)objectModel;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteUIDelegate;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setRemoteUIDelegate:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;
- (long long)transportWithActionString:(id)arg1;

@end
