
@interface PKBarcodePassDetailViewController : PKSectionTableViewController <PKPassHeaderViewDelegate, UITextViewDelegate> {
    PKSettingTableCell * _automaticSelectionCell;
    PKSettingTableCell * _automaticUpdatesCell;
    PKBarcodeTableViewCell * _barcodeCell;
    BluetoothManager * _btManager;
    PKPassColorProfile * _colorProfile;
    UITableViewCell * _deleteCell;
    <PKPassDeleteHandler> * _deleteOverrider;
    bool  _didRampScreenBrightness;
    PKPassDisplayProfile * _displayProfile;
    NSMutableDictionary * _fieldCellsByRow;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    double  _headerHeight;
    UIView * _headerView;
    bool  _isBluetoothEnabled;
    bool  _isLocationEnabled;
    bool  _isWifiEnabled;
    PKLinkedAppView * _linkedApp;
    UIView * _locationHelpView;
    PKPass * _pass;
    PKPassHeaderView * _passHeaderView;
    UITableViewCell * _personalizePassCell;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousLayoutTableViewBoundsSize;
    UIRefreshControl * _refreshControl;
    NSObject<OS_dispatch_source> * _refreshTimeout;
    bool  _showDoneButton;
    PKSettingTableCell * _showInLockScreenCell;
    PKSettingTableCell * _showNotificationsCell;
    bool  _showsLinks;
    unsigned long long  _suppressedContent;
    double  _titleOpacity;
    unsigned char  _visiblityState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteHandler> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic) bool showDoneButton;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent;

+ (bool)isWifiEnabled;

- (void).cxx_destruct;
- (id)_automaticSelectionCell;
- (id)_barcodeCell;
- (void)_bluetoothPowerChanged:(id)arg1;
- (bool)_canShowWhileLocked;
- (id)_deleteCell;
- (void)_done:(id)arg1;
- (id)_fieldCellForRow:(unsigned long long)arg1;
- (id)_fieldForRow:(unsigned long long)arg1;
- (bool)_isBluetoothEnabled;
- (bool)_linkedAppAvailable;
- (id)_locationHelpTextWithLink:(id*)arg1 linkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)_locationHelpViewForTableView:(id)arg1;
- (unsigned long long)_numberOfAvailableSettings;
- (double)_offscreenHeaderHeight;
- (void)_passSettingsChanged:(id)arg1;
- (bool)_personalizeAvailable;
- (id)_personalizePassCell;
- (void)_refreshFinished:(bool)arg1;
- (id)_relevantBuckets;
- (void)_reloadPassAndView;
- (unsigned long long)_settingForRow:(unsigned long long)arg1;
- (bool)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (void)_sharePass;
- (bool)_updateHeaderHeight;
- (void)_updateNavigationItem;
- (void)_updatePassProperties;
- (void)_updateStandardAppearance:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (void)dealloc;
- (id)deleteOverrider;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (id)linkedApp;
- (void)loadView;
- (id)pass;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)passHeaderViewPassWasDeleted:(id)arg1;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (bool)reloadData;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDeleteOverrider:(id)arg1;
- (void)setShowDoneButton:(bool)arg1;
- (void)setShowsLinks:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (bool)shouldAllowRefresh;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)showDoneButton;
- (unsigned long long)suppressedContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
