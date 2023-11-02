
@interface AAUICustodiansListViewController : AAUIOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    AAUIProfilePictureStore * _pictureStore;
    AAUIOBCustodiansListViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pictureStore;
- (void)_setupTableView;
- (id)initWithContacts:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
