
@interface WKDataListSuggestionsViewController : UITableViewController {
    WKDataListSuggestionsControl * _control;
}

@property (nonatomic) WKDataListSuggestionsControl *control;

- (void).cxx_destruct;
- (id)control;
- (void)reloadData;
- (void)setControl:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
