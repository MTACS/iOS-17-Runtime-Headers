
@interface WFDiagnosticsTableViewController : WFInsetTableViewController {
    WFAppearanceProxy * _appearanceProxy;
    WFNetworkSettingsCellFactory * _cellFactory;
    <WFDiagnosticsProviderContext> * _context;
    <WFDetailsProviderContext> * _detailsContext;
    WFHyperlinkFooterView * _linkFooterView;
    UITableViewCell * _networkQualityCell;
    NSDate * _networkQualityFooterDate;
    WFHyperlinkFooterView * _networkQualityFooterView;
    bool  _networkQualitySpinning;
    NSOrderedSet * _sections;
    bool  _useInsetGroupedTableView;
}

@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (nonatomic, retain) WFNetworkSettingsCellFactory *cellFactory;
@property (nonatomic, retain) <WFDiagnosticsProviderContext> *context;
@property (nonatomic, retain) <WFDetailsProviderContext> *detailsContext;
@property (nonatomic, retain) WFHyperlinkFooterView *linkFooterView;
@property (nonatomic, retain) UITableViewCell *networkQualityCell;
@property (nonatomic, retain) NSDate *networkQualityFooterDate;
@property (nonatomic, retain) WFHyperlinkFooterView *networkQualityFooterView;
@property (nonatomic) bool networkQualitySpinning;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic) bool useInsetGroupedTableView;

- (void).cxx_destruct;
- (id)_defaultSections;
- (void)_fillNetworkQualityCell:(id)arg1;
- (void)_networkQualityOpenURL;
- (void)_openNetworkQualityDetails:(id)arg1;
- (void)_refresh;
- (void)_reloadNetworkQualityCell;
- (void)_runNetworkQuality;
- (void)_updateNetworkQualityFooterText;
- (id)appearanceProxy;
- (id)cellFactory;
- (id)context;
- (id)detailsContext;
- (void)donePressed;
- (id)initWithDiagnosticsContext:(id)arg1 detailsProviderContext:(id)arg2;
- (id)initWithDiagnosticsContext:(id)arg1 detailsProviderContext:(id)arg2 appearanceProxy:(id)arg3;
- (id)linkFooterView;
- (id)networkQualityCell;
- (id)networkQualityFooterDate;
- (id)networkQualityFooterView;
- (bool)networkQualitySpinning;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setAppearanceProxy:(id)arg1;
- (void)setCellFactory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDetailsContext:(id)arg1;
- (void)setLinkFooterView:(id)arg1;
- (void)setNetworkQualityCell:(id)arg1;
- (void)setNetworkQualityFooterDate:(id)arg1;
- (void)setNetworkQualityFooterView:(id)arg1;
- (void)setNetworkQualitySpinning:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setUseInsetGroupedTableView:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)useInsetGroupedTableView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
