
@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {
    NSMutableArray * topLevelViewControllerNames;
    NSMutableArray * topLevelViewControllers;
}

- (void).cxx_destruct;
- (void)addTopLevelViewController:(id)arg1 forName:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleOverlayFullscreen;
- (void)toggleOverlayVisibility;
- (id)topLevelViewControllerForName:(id)arg1;
- (void)viewDidLoad;

@end