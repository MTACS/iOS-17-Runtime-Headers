
@interface MCUITableViewController : UITableViewController <PSStateRestoration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)reloadTableOnContentSizeCategoryChange;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
