
@interface SFManageExtensionsViewController : UITableViewController <SFContentBlockerManagerObserver, UISearchBarDelegate, WBSExtensionsControllerObserver> {
    SFContentBlockerManager * _contentBlockerManager;
    NSArray * _extensionAppLockupViews;
    NSArray * _extensions;
    NSArray * _filteredExtensionAppLockupViews;
    NSArray * _filteredExtensions;
    double  _indentationWidthOfCell;
    bool  _presentedFromPrivateBrowsing;
    _SFPageFormatMenuController * _presentingPageFormatMenu;
    UISearchBar * _searchBar;
    NSString * _userTypedQuery;
    bool  _waitingForLockupViews;
    SFWebExtensionsController * _webExtensionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _SFPageFormatMenuController *presentingPageFormatMenu;
@property (readonly) Class superclass;

+ (id)createManageExtensionsNavigationControllerFromPageFormatMenu:(id)arg1 activeDocument:(id)arg2;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_extensionStateWasToggled:(id)arg1;
- (void)_filterExtensionAppLockupViewsBasedOnUserTypedSearchQuery;
- (void)_filterExtensionsBasedOnUserTypedSearchQuery;
- (bool)_isAppStoreLinkSection:(long long)arg1;
- (bool)_isOnOtherDevicesSection:(long long)arg1;
- (void)_refreshExtensionData;
- (void)_reload;
- (void)_setPrivateBrowsingStateForExtension:(id)arg1 isOn:(bool)arg2;
- (void)_updateCloudExtensionLockupViews;
- (void)_updateLastViewedDate;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)dealloc;
- (void)extensionsControllerExtensionListDidChange:(id)arg1;
- (id)initFromPageFormatMenu:(id)arg1 activeDocument:(id)arg2;
- (id)initFromSettingsWithExtensionsController:(id)arg1 contentBlockerManager:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentingPageFormatMenu;
- (bool)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)setPresentingPageFormatMenu:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
