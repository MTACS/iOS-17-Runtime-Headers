
@interface _SFPerSitePreferencesPopoverViewController : UITableViewController <SFSwitchTableViewCellDelegate> {
    <_SFBrowserDocument> * _browserDocument;
    NSString * _domain;
    UIBarButtonItem * _doneButton;
    NSIndexPath * _expandedRowIndexPath;
    long long  _numberOfValuesInExpandedPreference;
    _SFPerSitePreferencesVendor * _perSitePreferencesVendor;
    NSMutableDictionary * _preferenceToValueCache;
    NSArray * _preferencesBySections;
    bool  _shouldShowLockdownPreference;
    bool  _shouldShowSecurePagePreferences;
}

@property (nonatomic, readonly) <_SFBrowserDocument> *browserDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didRetrieveValue:(id)arg1 forPreference:(id)arg2;
- (void)_done:(id)arg1;
- (id)_generalPageSection;
- (id)_indexPathForView:(id)arg1;
- (void)_initializePreferences;
- (id)_preferenceAtIndexPath:(id)arg1;
- (id)_preferenceRowIndexPathForCellAtIndexPath:(id)arg1;
- (id)_securePageSection;
- (void)_setPreferenceValue:(id)arg1 forPreference:(id)arg2;
- (void)_setPreferenceValueIndex:(long long)arg1 forView:(id)arg2;
- (id)browserDocument;
- (id)initWithBrowserDocument:(id)arg1 perSitePreferencesVendor:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadPreferences;
- (bool)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)switchTableViewCell:(id)arg1 didChangeSwitchState:(bool)arg2;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;

@end
