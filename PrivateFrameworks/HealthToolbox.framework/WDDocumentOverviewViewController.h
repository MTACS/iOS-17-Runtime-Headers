
@interface WDDocumentOverviewViewController : HKTableViewController <WDUserActivityResponder> {
    UIFont * _bodyFont;
    WDDocumentListDataProvider * _dataProvider;
    HKDisplayType * _displayType;
    WDProfile * _profile;
    NSMutableArray * _reportRowTypes;
    NSMutableArray * _sectionTypes;
    long long  _totalReportCount;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, readonly) WDDocumentListDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, retain) NSMutableArray *reportRowTypes;
@property (nonatomic, retain) NSMutableArray *sectionTypes;
@property (readonly) Class superclass;
@property (nonatomic) long long totalReportCount;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (void)_installSections;
- (void)_pushAccessViewController;
- (void)_pushReportDetailViewControllerForIndexPath:(id)arg1;
- (void)_pushShowAllViewController;
- (void)_recomputeTotalReportCount;
- (void)_reloadAllData;
- (id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (double)_reportSectionEstimatedRowHeight:(long long)arg1;
- (double)_reportSectionRowHeight:(long long)arg1;
- (id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (void)_selectReportRowForIndexPath:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)bodyFont;
- (id)dataProvider;
- (void)dealloc;
- (id)displayType;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (id)reportRowTypes;
- (id)sectionTypes;
- (void)setBodyFont:(id)arg1;
- (void)setReportRowTypes:(id)arg1;
- (void)setSectionTypes:(id)arg1;
- (void)setTotalReportCount:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)totalReportCount;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
