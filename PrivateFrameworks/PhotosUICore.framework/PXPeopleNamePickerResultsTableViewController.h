
@interface PXPeopleNamePickerResultsTableViewController : UITableViewController {
    PHFace * _face;
    NSMutableArray * _items;
    PHPerson * _person;
}

@property (readonly) PHFace *face;
@property (nonatomic, readonly) bool hasResults;
@property (retain) NSMutableArray *items;
@property (readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)contactAtIndexPath:(id)arg1;
- (id)face;
- (bool)hasResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 person:(id)arg2 face:(id)arg3;
- (id)items;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)person;
- (id)personAtIndexPath:(id)arg1;
- (void)setItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateItemsForSearchString:(id)arg1;
- (void)viewDidLoad;

@end
