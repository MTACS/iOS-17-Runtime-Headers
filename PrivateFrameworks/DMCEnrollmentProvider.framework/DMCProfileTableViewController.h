
@interface DMCProfileTableViewController : UITableViewController <PSStateRestoration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)hideProgressInNavBarShowBackButton:(bool)arg1;
- (void)presentViewController:(id)arg1;
- (void)reloadTableOnContentSizeCategoryChange;
- (void)showProgressInNavBar;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
