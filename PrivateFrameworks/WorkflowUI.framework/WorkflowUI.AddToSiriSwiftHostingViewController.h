
@interface WorkflowUI.AddToSiriSwiftHostingViewController : UIViewController {
    void currentStatus;
    void database;
    void delegate;
    void didFireCompletion;
    void hostingController;
    void workflow;
}

@property (nonatomic, retain) WFDatabase *database;
@property (nonatomic, retain) <_TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_> *delegate;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)database;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id)workflow;

@end
