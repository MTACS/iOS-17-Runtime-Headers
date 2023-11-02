
@interface UIDebuggingKBAutoFillViewController : UIViewController <UIDebuggingInformationViewController, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveTopMostViewControllerForAutoFillTest;
- (id)_formTypeFileName:(long long)arg1;
- (id)_getTopMostViewControllerInWindow:(id)arg1;
- (void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
