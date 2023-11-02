
@interface PKSelectActionView : UIView <UITableViewDataSource, UITableViewDelegate> {
    PKSelectActionHeader * _actionHeader;
    unsigned long long  _actionType;
    NSArray * _actions;
    NSDictionary * _balances;
    <PKSelectActionViewDelegate> * _delegate;
    PKPass * _pass;
    PKPaymentPassAction * _selectedAction;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSelectActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPassAction *selectedAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)_balanceForTopUpAction:(id)arg1;
- (id)delegate;
- (id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 balanceDictionary:(id)arg4;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedAction;
- (void)setDelegate:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
