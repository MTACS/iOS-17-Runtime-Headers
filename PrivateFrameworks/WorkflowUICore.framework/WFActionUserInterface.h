
@interface WFActionUserInterface : NSObject <WFActionRemoteUserInterface> {
    WFDialogAttribution * _attribution;
    <WFActionUserInterfaceDelegate> * _delegate;
    WFWorkflowRunningContext * _runningContext;
    NSString * _userInterfaceType;
    UIViewController * _viewControllerForPresenting;
}

@property (nonatomic, readonly) WFDialogAttribution *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionUserInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *presentationAnchor;
@property (nonatomic, retain) WFWorkflowRunningContext *runningContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;
@property (nonatomic, retain) UIViewController *viewControllerForPresenting;

- (void).cxx_destruct;
- (id)attribution;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (id)initWithUserInterfaceType:(id)arg1 attribution:(id)arg2;
- (id)presentationAnchor;
- (id)runningContext;
- (void)setDelegate:(id)arg1;
- (void)setRunningContext:(id)arg1;
- (void)setViewControllerForPresenting:(id)arg1;
- (id)userInterfaceType;
- (id)viewControllerForPresenting;

@end
