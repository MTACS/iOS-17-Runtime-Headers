
@interface CACShortcutsSelectionTableViewController : UITableViewController {
    NSArray * _cachedShortcuts;
    NSIndexPath * _previouslySelectedIndex;
    AXSiriShortcut * _previouslySelectedShortcut;
    <CACShortcutsSelectionDelegate> * _shortcutsSelectionDelegate;
    NSString * _shortcutsToken;
}

@property (nonatomic, retain) NSArray *cachedShortcuts;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndex;
@property (nonatomic, retain) AXSiriShortcut *previouslySelectedShortcut;
@property (nonatomic, retain) <CACShortcutsSelectionDelegate> *shortcutsSelectionDelegate;
@property (nonatomic, retain) NSString *shortcutsToken;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)cachedShortcuts;
- (void)cancelButtonAction;
- (id)initWithPreviouslySelectedShortcut:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)previouslySelectedIndex;
- (id)previouslySelectedShortcut;
- (void)setCachedShortcuts:(id)arg1;
- (void)setPreviouslySelectedIndex:(id)arg1;
- (void)setPreviouslySelectedShortcut:(id)arg1;
- (void)setShortcutsSelectionDelegate:(id)arg1;
- (void)setShortcutsToken:(id)arg1;
- (void)shortcutsDidChange:(id)arg1;
- (id)shortcutsSelectionDelegate;
- (id)shortcutsToken;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
