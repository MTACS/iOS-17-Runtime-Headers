
@interface NewsUI2.SportsManagementDetailViewController : UIViewController <UITableViewDelegate> {
    void blueprintViewController;
    void eventHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void selectionProvider;
    void styler;
    void titleViewProvider;
}

- (void).cxx_destruct;
- (void)dismissVC;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
