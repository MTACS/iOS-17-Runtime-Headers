
@interface WFGiphyAction : WFAction {
    WFGiphySessionManager * _sessionManager;
}

@property (nonatomic, readonly) WFGiphySessionManager *sessionManager;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id*)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithNoUserInterface;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)sessionManager;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
