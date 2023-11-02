
@interface WFDialogTransformer : NSObject <WFActionParameterInputProvider, WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost> {
    NSArray * _airPlayRouteIDs;
    NSArray * _allowedParameterClasses;
    WFChooseFromListDataStore * _chooseFromListDataStore;
    WFAction * _currentAction;
    <WFDialogTransformerDelegate> * _delegate;
    long long  _executionContext;
    bool  _hasPresentedFirstDialog;
    long long  _numberOfDialogsPresented;
    id /* block */  _parameterInputCompletionHandler;
    WFSequentialParameterInputProvider * _parameterInputProvider;
    NSString * _runSource;
    WFWorkflowRunViewSource * _runViewSource;
    WFWorkflowRunningContext * _runningContext;
    WFSiriWorkflowRunnerClientOptions * _siriOptions;
    WFSiriUIPresenter * _siriUIPresenter;
    WFUIPresenter * _userInterfacePresenter;
    WFWorkflow * _workflow;
    NSDate * _workflowStartTime;
}

@property (nonatomic, readonly, copy) NSArray *airPlayRouteIDs;
@property (nonatomic, retain) NSArray *allowedParameterClasses;
@property (nonatomic, readonly) WFDialogAttribution *attribution;
@property (nonatomic, retain) WFChooseFromListDataStore *chooseFromListDataStore;
@property (nonatomic, retain) WFAction *currentAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDialogTransformerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long executionContext;
@property (nonatomic) bool hasPresentedFirstDialog;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfDialogsPresented;
@property (nonatomic, copy) id /* block */ parameterInputCompletionHandler;
@property (nonatomic, retain) WFSequentialParameterInputProvider *parameterInputProvider;
@property (nonatomic, readonly) NSString *runSource;
@property (nonatomic, retain) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, readonly) WFWorkflowRunningContext *runningContext;
@property (nonatomic, retain) WFSiriWorkflowRunnerClientOptions *siriOptions;
@property (nonatomic, retain) WFSiriUIPresenter *siriUIPresenter;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFUIPresenter *userInterfacePresenter;
@property (nonatomic, readonly) NSString *userInterfaceType;
@property (nonatomic, retain) WFWorkflow *workflow;
@property (nonatomic, retain) NSDate *workflowStartTime;

- (void).cxx_destruct;
- (bool)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 prompts:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)actionForAttribution;
- (id)airPlayRouteIDs;
- (id)allowedParameterClasses;
- (id)attribution;
- (id)attributionIcon;
- (id)attributionTitle;
- (void)cancel;
- (id)chooseFromListDataStore;
- (void)cleanupListDialogRequestIfNeeded:(id)arg1;
- (void)configureIntent:(id)arg1;
- (void)configureSmartPromptIntent:(id)arg1 withConfiguration:(id)arg2;
- (id)currentAction;
- (id)delegate;
- (id)dialogTransformer;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)arg1;
- (void)executeSmartPromptIntentWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)executionContext;
- (void)getEnvironmentForLinkViewSnippetWithCompletion:(id /* block */)arg1;
- (void)getPreferredSizeForLinkViewSnippetWithCompletion:(id /* block */)arg1;
- (void)handleAlertAsSiriDialog:(id)arg1;
- (void)handleAlertWithDatePicker:(id)arg1;
- (void)handleAlertWithMultipleButtons:(id)arg1;
- (void)handleAlertWithTextField:(id)arg1;
- (void)handleSimpleAlert:(id)arg1;
- (bool)hasPresentedFirstDialog;
- (id)initWithWorkflow:(id)arg1 userInterfacePresenter:(id)arg2 runSource:(id)arg3 runningContext:(id)arg4;
- (bool)isRunningInSiri;
- (long long)numberOfDialogsPresented;
- (void)openAppWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)parameterInputCompletionHandler;
- (id)parameterInputProvider;
- (bool)performSiriRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareListDialogRequestIfNeeded:(id*)arg1;
- (void)presentAlert:(id)arg1;
- (id)privacyAttribution;
- (void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestFileAccessForURLs:(id)arg1 workflowName:(id)arg2 workflowID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resolveDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)runSource;
- (id)runViewSource;
- (id)runningContext;
- (void)sequentialParameterInputProvider:(id)arg1 didAdvanceToParameter:(id)arg2 action:(id)arg3 defaultState:(id)arg4 prompt:(id)arg5 completion:(id /* block */)arg6;
- (void)sequentialParameterInputProvider:(id)arg1 didFinishWithInputtedStates:(id)arg2;
- (void)sequentialParameterInputProviderDidCancel:(id)arg1;
- (void)setAllowedParameterClasses:(id)arg1;
- (void)setChooseFromListDataStore:(id)arg1;
- (void)setCurrentAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasPresentedFirstDialog:(bool)arg1;
- (void)setNumberOfDialogsPresented:(long long)arg1;
- (void)setParameterInputCompletionHandler:(id /* block */)arg1;
- (void)setParameterInputProvider:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setSiriOptions:(id)arg1;
- (void)setSiriUIPresenter:(id)arg1;
- (void)setUserInterfacePresenter:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (void)setWorkflowStartTime:(id)arg1;
- (id)shortcutsAppAttribution;
- (bool)shouldHandleAlertAsSiriDialog:(id)arg1;
- (bool)shouldNotHandoff;
- (void)showAskParameterDialogForParameter:(id)arg1 action:(id)arg2 defaultState:(id)arg3 prompt:(id)arg4 completion:(id /* block */)arg5;
- (void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)showDialogRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showLinkActionConfirmationWithActionMetadata:(id)arg1 showPrompt:(bool)arg2 dialogString:(id)arg3 viewSnippet:(id)arg4 confirmationActionName:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)showLinkParameterConfirmationWithActionMetadata:(id)arg1 dialogString:(id)arg2 viewSnippet:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)showLinkResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showPreviewForContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)siriOptions;
- (id)siriUIPresenter;
- (void)stopWithError:(id)arg1;
- (void)swapSiriUIPresenterWithPresenter:(id)arg1;
- (void)updateSmartPromptsWithConfiguration:(id)arg1 resultCode:(unsigned long long)arg2 error:(id*)arg3;
- (id)userInterfacePresenter;
- (id)userInterfaceType;
- (void)willBeginExecutingShortcutStep:(id)arg1;
- (id)workflow;
- (id)workflowName;
- (id)workflowStartTime;
- (void)workflowWillBegin;

@end