
@interface SFPrivacyReportViewController : UIViewController <SFPrivacyReportDetailToggleTableViewCellDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportPrivacyProxyTipTableViewCellDelegate, SFTableViewDiffableDataSourceDelegate, UITableViewDelegatePrivate> {
    SFTableViewDiffableDataSource * _diffableDataSource;
    NSString * _domain;
    NSSet * _histories;
    long long  _listDetailType;
    double  _maxCountForDetailList;
    bool  _needsRowHeightUpdate;
    WBSPrivacyReportData * _privacyReportData;
    NSSet * _profileIdentifiers;
    bool  _showExplanationDetailView;
    bool  _showingCurrentWebsite;
    UITableView * _tableView;
    bool  _usesInsetStyle;
    WKWebView * _webView;
    bool  _websiteDetailShouldSeparateBlockedTrackers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *histories;
@property (nonatomic, copy) NSSet *profileIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool websiteDetailShouldSeparateBlockedTrackers;

- (void).cxx_destruct;
- (id)_cellForRowWithIndexPath:(id)arg1 itemIdentifier:(id)arg2;
- (void)_createTableViewIfNeededLoadingReport:(bool)arg1;
- (void)_doneBarButtonItemAction:(id)arg1;
- (bool)_privacyProxyTip:(long long*)arg1;
- (void)_reloadDataLoadingReport:(bool)arg1;
- (long long)_sectionTypeFromSectionIndex:(long long)arg1;
- (void)_updateLayoutMargins;
- (void)_updateUsesInsetStyle;
- (void)cellDidToggleDetailType:(id)arg1;
- (void)cellDidToggleExpandDetailedExplanation:(id)arg1;
- (void)cellPrivacyProxyStateChanged:(id)arg1;
- (void)cellPrivacyProxyUpsellDismissed:(id)arg1;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (id)domain;
- (void)gridViewDidUpdateContentSize:(id)arg1;
- (id)histories;
- (id)initWithDomain:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (id)profileIdentifiers;
- (void)setHistories:(id)arg1;
- (void)setNeedsUpdateRowHeight;
- (void)setProfileIdentifiers:(id)arg1;
- (void)setWebsiteDetailShouldSeparateBlockedTrackers:(bool)arg1;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)websiteDetailShouldSeparateBlockedTrackers;

@end
