
@interface CACCustomCommandActionViewController : UITableViewController <AXGestureRecorderMainViewControllerDelegate, CACShortcutsSelectionDelegate, UITextViewDelegate> {
    CACSpokenCommandItem * _commandItem;
    <CACCustomCommandActionViewControllerDelegate> * _delegate;
    bool  _isPresentingGestureRecorder;
    AXSiriShortcut * _selectedShortcutForCommand;
}

@property (nonatomic, retain) CACSpokenCommandItem *commandItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CACCustomCommandActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresentingGestureRecorder;
@property (nonatomic, retain) AXSiriShortcut *selectedShortcutForCommand;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_shouldDisallowSelectingRowAtIndexPath:(id)arg1;
- (id)_stringFromPasteboardDataArray:(id)arg1;
- (void)_updateForAction:(long long)arg1;
- (bool)_useDetailCell;
- (id)commandItem;
- (id)delegate;
- (void)didSelectShortcut:(id)arg1;
- (void)gestureRecorder:(id)arg1 saveReplayableGesture:(id)arg2;
- (id)init;
- (bool)isModalInPresentation;
- (bool)isPresentingGestureRecorder;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedShortcutForCommand;
- (void)setCommandItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPresentingGestureRecorder:(bool)arg1;
- (void)setSelectedShortcutForCommand:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
