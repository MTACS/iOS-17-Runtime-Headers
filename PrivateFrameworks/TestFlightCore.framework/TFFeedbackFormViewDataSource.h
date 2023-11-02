
@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {
    TFFeedbackFormCellUpdater * _cellUpdater;
    TFFeedbackFormPresenter * _presenter;
}

@property (nonatomic, readonly) TFFeedbackFormCellUpdater *cellUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TFFeedbackFormPresenter *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellUpdater;
- (id)initWithPresenter:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareTableViewForDataSource:(id)arg1;
- (id)presenter;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
