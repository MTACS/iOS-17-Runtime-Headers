
@interface PKSelectActionGroupView : UIView <UITableViewDataSource, UITableViewDelegate> {
    PKSelectActionGroupHeader * _actionGroupHeader;
    NSArray * _actionGroups;
    <PKSelectActionGroupViewDelegate> * _delegate;
    PKPaymentPass * _pass;
    PKPaymentPassActionGroup * _selectedActionGroup;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSelectActionGroupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPassActionGroup *selectedActionGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)delegate;
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedActionGroup;
- (void)setDelegate:(id)arg1;
- (void)setSelectedActionGroup:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
