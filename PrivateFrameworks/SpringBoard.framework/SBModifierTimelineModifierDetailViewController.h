
@interface SBModifierTimelineModifierDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    SBSwitcherModifierStackSnapshot * _stackSnapshot;
    UITableView * _tableView;
    SBModifierTimelineTextDetailViewController * _textViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBSwitcherModifierStackSnapshot *stackSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setStackSnapshot:(id)arg1;
- (id)stackSnapshot;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
