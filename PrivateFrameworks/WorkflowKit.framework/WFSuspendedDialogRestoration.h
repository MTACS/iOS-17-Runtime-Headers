
@interface WFSuspendedDialogRestoration : NSObject <WFUIPresenterDelegate> {
    FBSDisplayLayoutMonitor * _layoutMonitor;
    WFUIPresenter * _presenter;
    bool  _screenDidTurnOffDuringActiveRequest;
    WFScreenOnObserver * _screenOnObserver;
    bool  _shortcutsAppDidBackgroundDuringActiveRequest;
    WFDialogRequest * _suspendedRequest;
    id /* block */  _suspendedRequestCompletion;
    WFWorkflowRunningContext * _suspendedRunningContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *layoutMonitor;
@property (nonatomic, retain) WFUIPresenter *presenter;
@property (nonatomic) bool screenDidTurnOffDuringActiveRequest;
@property (nonatomic, retain) WFScreenOnObserver *screenOnObserver;
@property (nonatomic) bool shortcutsAppDidBackgroundDuringActiveRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFDialogRequest *suspendedRequest;
@property (nonatomic, copy) id /* block */ suspendedRequestCompletion;
@property (nonatomic, retain) WFWorkflowRunningContext *suspendedRunningContext;

- (void).cxx_destruct;
- (void)beginObservingApplicationState;
- (id)initWithUserInterfacePresenter:(id)arg1;
- (id)layoutMonitor;
- (id)presenter;
- (void)presenterDidReceiveSuspendedResponseForRequest:(id)arg1 runningContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)presenterShouldShowRequest:(id)arg1 runningContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)presenterWillDismissPresentedContent;
- (void)reset;
- (bool)screenDidTurnOffDuringActiveRequest;
- (id)screenOnObserver;
- (void)setLayoutMonitor:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setScreenDidTurnOffDuringActiveRequest:(bool)arg1;
- (void)setScreenOnObserver:(id)arg1;
- (void)setShortcutsAppDidBackgroundDuringActiveRequest:(bool)arg1;
- (void)setSuspendedRequest:(id)arg1;
- (void)setSuspendedRequestCompletion:(id /* block */)arg1;
- (void)setSuspendedRunningContext:(id)arg1;
- (bool)shortcutsAppDidBackgroundDuringActiveRequest;
- (bool)shortcutsAppIsForegroundInLayout:(id)arg1;
- (void)stopObservingApplicationState;
- (id)suspendedRequest;
- (id /* block */)suspendedRequestCompletion;
- (id)suspendedRunningContext;

@end
