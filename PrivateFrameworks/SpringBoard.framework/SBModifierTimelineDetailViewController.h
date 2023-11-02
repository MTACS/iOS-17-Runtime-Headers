
@interface SBModifierTimelineDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    SBSwitcherModifierTimelineEntry * _entry;
    SBModifierTimelineModifierDetailViewController * _modifierDetailViewController;
    UITableView * _tableView;
    SBModifierTimelineTextDetailViewController * _textDetailViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBSwitcherModifierTimelineEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done;
- (long long)_numberOfModifiersInStackSnapshot:(id)arg1;
- (id)_prettyStringForEventPredicateDetails:(id)arg1;
- (id)_stackSnapshotAtIndex:(long long)arg1;
- (id)entry;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEntry:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
