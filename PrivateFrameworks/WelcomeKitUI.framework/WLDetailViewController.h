
@interface WLDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    WLContext * _context;
    NSArray * _data;
    bool  _isNothingImported;
    NSString * _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithContext:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCustomNavigationTitleView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
