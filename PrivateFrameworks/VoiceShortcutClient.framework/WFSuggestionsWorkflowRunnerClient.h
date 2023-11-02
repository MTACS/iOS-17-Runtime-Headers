
@interface WFSuggestionsWorkflowRunnerClient : WFWorkflowRunnerClient {
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithINShortcut:(id)arg1 executionContext:(long long)arg2;
- (id)initWithINShortcut:(id)arg1 executionContext:(long long)arg2 remoteDialogPresenterEndpoint:(id)arg3;
- (id)initWithLinkAction:(id)arg1 bundleIdentifier:(id)arg2 resultSurface:(unsigned long long)arg3;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
