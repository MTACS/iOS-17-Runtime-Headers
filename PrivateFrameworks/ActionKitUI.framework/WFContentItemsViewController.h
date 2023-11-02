
@interface WFContentItemsViewController : UITableViewController {
    bool  _allowsCoercion;
    NSArray * _contentItems;
}

@property (nonatomic) bool allowsCoercion;
@property (nonatomic, retain) NSArray *contentItems;

- (void).cxx_destruct;
- (bool)allowsCoercion;
- (id)contentItems;
- (void)setAllowsCoercion:(bool)arg1;
- (void)setContentItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
