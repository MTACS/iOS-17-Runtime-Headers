
@interface WFAddToSiriViewController : UIViewController <WorkflowUI.AddToSiriSwiftHostingViewControllerDelegate> {
    WFDatabase * _database;
    <WFAddToSiriViewControllerDelegate> * _delegate;
    _TtC10WorkflowUI35AddToSiriSwiftHostingViewController * _hostedAddToSiriController;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFDatabase *database;
@property (nonatomic) <WFAddToSiriViewControllerDelegate> *delegate;
@property (nonatomic, retain) _TtC10WorkflowUI35AddToSiriSwiftHostingViewController *hostedAddToSiriController;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (void)addToSiriDidCancelWithViewController:(id)arg1;
- (void)addToSiriWithViewController:(id)arg1 createdShortcut:(id)arg2;
- (void)addToSiriWithViewController:(id)arg1 deletedShortcut:(id)arg2;
- (void)addToSiriWithViewController:(id)arg1 savedShortcut:(id)arg2;
- (id)database;
- (id)delegate;
- (id)hostedAddToSiriController;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostedAddToSiriController:(id)arg1;
- (void)viewDidLoad;
- (id)workflow;

@end
