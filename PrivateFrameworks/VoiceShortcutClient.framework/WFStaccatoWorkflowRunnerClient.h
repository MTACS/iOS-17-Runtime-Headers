
@interface WFStaccatoWorkflowRunnerClient : WFWorkflowRunnerClient {
    WFConfiguredStaccatoAction * _action;
    WFContextualActionContext * _actionContext;
    bool  _hasStartedRun;
}

@property (nonatomic, retain) WFConfiguredStaccatoAction *action;
@property (nonatomic, retain) WFContextualActionContext *actionContext;
@property (nonatomic, readonly) bool hasCompletedRun;
@property (nonatomic) bool hasStartedRun;
@property (nonatomic, readonly, copy) NSString *presentableIdentifier;
@property (nonatomic, readonly, copy) NSString *presentableRequester;

- (void).cxx_destruct;
- (id)action;
- (id)actionContext;
- (bool)hasCompletedRun;
- (bool)hasStartedRun;
- (id)initWithDescriptor:(id)arg1 runRequest:(id)arg2;
- (id)initWithLinkStaccatoAction:(id)arg1 interactionType:(id)arg2 preciseTimeStamp:(id)arg3;
- (id)initWithStaccatoAction:(id)arg1;
- (id)initWithStaccatoAction:(id)arg1 interactionType:(id)arg2 preciseTimeStamp:(id)arg3;
- (id)initWithTopHitStaccatoAction:(id)arg1;
- (id)initWithWorkflowStaccatoAction:(id)arg1;
- (id)presentableIdentifier;
- (id)presentableRequester;
- (id)prewarmManager;
- (void)setAction:(id)arg1;
- (void)setActionContext:(id)arg1;
- (void)setHasStartedRun:(bool)arg1;
- (void)start;
- (void)startWithInteractionType:(id)arg1 preciseTimeStamp:(id)arg2;
- (void)userInteractionBegan;

@end
