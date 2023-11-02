
@interface WFWorkflowSettingsViewController : UIViewController {
    void database;
    void delegate;
    void hideNavigationBar;
    void hostingController;
    void workflow;
}

@property (nonatomic) <WFWorkflowSettingsViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 hideNavigationBar:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
