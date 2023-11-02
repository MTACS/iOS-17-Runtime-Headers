
@interface WFHomeWorkflowEditorViewController : UIViewController <WFComposeViewControllerDelegate> {
    WFComposeViewController * _composeViewController;
    <WFHomeWorkflowEditorViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) WFComposeViewController *composeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFHomeWorkflowEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)preloadActionRegistryIfNeeded;
+ (void)preloadHomeManager;

- (void).cxx_destruct;
- (id)composeViewController;
- (void)composeViewControllerRequestsDismissal:(id)arg1 forTutorial:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)delegate;
- (void)didTapDone;
- (id)doneBarButtonItem;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
