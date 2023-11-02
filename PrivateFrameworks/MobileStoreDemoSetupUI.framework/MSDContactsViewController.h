
@interface MSDContactsViewController : UIViewController <UITableViewDataSource> {
    MSDStoreContactsModel * _contactsModel;
    NSMutableArray * _regions;
}

@property (nonatomic, retain) MSDStoreContactsModel *contactsModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *regions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactsModel;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)regions;
- (void)setContactsModel:(id)arg1;
- (void)setRegions:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
