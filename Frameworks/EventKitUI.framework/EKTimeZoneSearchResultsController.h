
@interface EKTimeZoneSearchResultsController : EKTimeZoneViewController <UISearchResultsUpdating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
