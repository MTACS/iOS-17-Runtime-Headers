
@interface MTUISelectionTableViewController : UITableViewController {
    bool  _allowsNone;
    <MTUISelectionTableViewControllerDelegate> * _delegate;
    NSIndexPath * _parentIndexPath;
    NSArray * _selectionData;
}

@property (nonatomic) bool allowsNone;
@property (nonatomic) <MTUISelectionTableViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSIndexPath *parentIndexPath;
@property (nonatomic, retain) NSArray *selectionData;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)allowsNone;
- (id)delegate;
- (void)deselectRowsExcluding:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 selectionData:(id)arg3 parentIndexPath:(id)arg4 allowsMultiple:(bool)arg5 allowsNone:(bool)arg6 delegate:(id)arg7;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)parentIndexPath;
- (id)selectionData;
- (void)setAllowsNone:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParentIndexPath:(id)arg1;
- (void)setSelectionData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
