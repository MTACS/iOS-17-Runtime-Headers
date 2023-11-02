
@interface PKSelectActionGroupActionsView : UIView <UITableViewDataSource, UITableViewDelegate> {
    PKPaymentPassActionGroup * _actionGroup;
    PKSelectActionGroupActionsHeader * _actionGroupActionsHeader;
    NSArray * _actions;
    <PKSelectActionGroupActionsViewDelegate> * _delegate;
    bool  _loading;
    PKPaymentPass * _pass;
    PKPaymentPassAction * _selectedAction;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSelectActionGroupActionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, retain) PKPaymentPassAction *selectedAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)delegate;
- (id)initWithPass:(id)arg1 actionGroup:(id)arg2;
- (bool)isLoading;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedAction;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setSelectedAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
