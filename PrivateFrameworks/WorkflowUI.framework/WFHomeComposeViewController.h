
@interface WFHomeComposeViewController : WFComposeViewController

@property (nonatomic) <WFHomeComposeViewControllerDelegate> *delegate;

+ (void)preloadActionRegistryIfNeeded;
+ (void)preloadHomeManager;

- (void)didTapDone;
- (void)dismissForTutorial:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)doneBarButtonItem;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3;
- (id)initWithWorkflow:(id)arg1 home:(id)arg2;
- (unsigned long long)navigationUpdateBehavior;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
