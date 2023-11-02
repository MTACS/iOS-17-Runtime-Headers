
@interface STWebFilterItemDetailController : PSListController {
    <STContentPrivacyViewModelCoordinator> * _coordinator;
    bool  _isNamedSite;
    NSString * _pageTitle;
    NSString * _pageURL;
    STWebFilterDetailController * _parentWebFilterController;
    STRestrictionItem * _restriction;
}

@property (nonatomic, retain) <STContentPrivacyViewModelCoordinator> *coordinator;
@property (nonatomic) bool isNamedSite;
@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, copy) NSString *pageURL;
@property STWebFilterDetailController *parentWebFilterController;
@property (nonatomic, retain) STRestrictionItem *restriction;

- (void).cxx_destruct;
- (id)coordinator;
- (id)init;
- (bool)isNamedSite;
- (id)pageTitle;
- (id)pageURL;
- (id)parentWebFilterController;
- (id)restriction;
- (void)saveFilterItem;
- (void)setCoordinator:(id)arg1;
- (void)setIsNamedSite:(bool)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setParentWebFilterController:(id)arg1;
- (void)setRestriction:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
