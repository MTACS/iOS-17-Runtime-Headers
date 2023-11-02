
@interface WorkflowUI.TriggerRootViewController : UIViewController <WFAutomationTriggerDataSourceDelegate, WFCreateAutomationCoordinatorDelegate> {
    void $__lazy_storage_$_automationListViewController;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_emptyStateViewController;
    void createAutomationController;
    void database;
    void homeManager;
}

- (void).cxx_destruct;
- (void)createAutomationCoordinatorDidCancel:(id)arg1;
- (void)createAutomationCoordinatorDidFinish:(id)arg1;
- (void)dataSourceDidUpdateTriggers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startCreateNewPersonalAutomation;
- (void)viewDidLoad;

@end
