
@interface MSDHelpMenuViewController : UITableViewController {
    NSMutableSet * _helpMenuUserTapped;
}

@property (nonatomic, retain) NSMutableSet *helpMenuUserTapped;

- (void).cxx_destruct;
- (id)helpMenuUserTapped;
- (id)init;
- (void)setHelpMenuUserTapped:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
