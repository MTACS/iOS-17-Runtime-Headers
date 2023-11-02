
@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating> {
    <WFMapSearchTableViewControllerDelegate> * _delegate;
    NSArray * _mapItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFMapSearchTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mapItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)mapItems;
- (void)setDelegate:(id)arg1;
- (void)setMapItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
