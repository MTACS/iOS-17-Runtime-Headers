
@interface PKPerformActionPurchaseNewView : UIView <PKPerformActionView, UITableViewDataSource, UITableViewDelegate> {
    PKPaymentPassAction * _action;
    <PKPerformActionViewDelegate> * _delegate;
    PKPass * _pass;
    PKPurchaseNewActionItem * _purchaseNewItem;
    UITableView * _tableView;
    long long  _textAlignment;
}

@property (nonatomic, readonly) UITextField *amountTextField;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)_optionsSectionFooterText;
- (id)_optionsSectionHeaderText;
- (id)amountTextField;
- (id)delegate;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)saveLastInputValues;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)transactionAmount;
- (id)transactionCurrency;

@end
