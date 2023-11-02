
@interface DMCManagedMediaViewController : DMCProfileTableViewController {
    DMCApplicationProxy * _app;
    MDMBook * _book;
    DMCProfileViewModel * _profileViewModel;
}

@property (nonatomic, retain) DMCApplicationProxy *app;
@property (nonatomic, retain) MDMBook *book;
@property (nonatomic, retain) DMCProfileViewModel *profileViewModel;

- (void).cxx_destruct;
- (void)_profileChanged:(id)arg1;
- (void)_reloadTable:(id)arg1;
- (void)_setup;
- (id)app;
- (id)book;
- (void)dealloc;
- (id)initWithProfileViewModel:(id)arg1 managedApp:(id)arg2;
- (id)initWithProfileViewModel:(id)arg1 managedBook:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profileViewModel;
- (void)setApp:(id)arg1;
- (void)setBook:(id)arg1;
- (void)setProfileViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
