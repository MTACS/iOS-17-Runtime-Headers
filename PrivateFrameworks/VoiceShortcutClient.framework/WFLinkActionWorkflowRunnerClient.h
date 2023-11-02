
@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient

- (void)finishWithError:(id)arg1;
- (id)initWithLinkAction:(id)arg1 appBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 runSource:(long long)arg4 authenticationPolicy:(long long)arg5;
- (id)initWithLinkAction:(id)arg1 bundleIdentifier:(id)arg2 runSource:(long long)arg3;
- (void)start;

@end
