
@interface MKIncidentsViewController : _MKTableViewController <IncidentExtendedDetailCellDelegate> {
    GEOComposedRouteAdvisory * _advisory;
    <IncidentsViewControllerDelegate> * _delegate;
    NSString * _incidentsTitle;
    NSArray * _sections;
    NSArray * _transitIncidents;
}

@property (nonatomic, copy) GEOComposedRouteAdvisory *advisory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IncidentsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *incidentsTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *transitIncidents;

- (void).cxx_destruct;
- (id)_advisoryItemCellForIndex:(long long)arg1;
- (bool)_canShowWhileLocked;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_compileSections;
- (unsigned long long)_incidentsCount;
- (void)_localeDidChange;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_sectionForSectionIndex:(long long)arg1;
- (id)_transitCellForIndex:(long long)arg1 inSection:(long long)arg2;
- (long long)_transitIncidentIndexForRow:(long long)arg1 section:(long long)arg2;
- (unsigned long long)_transitIncidentsCount;
- (void)_updateTitle;
- (id)advisory;
- (void)cellDidTapDownloadForLocation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)detailCellInSection:(long long)arg1;
- (id)extendedDetailCell;
- (id)incidentsTitle;
- (void)infoCardThemeChanged;
- (id)init;
- (id)initWithTransitIncidents:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataSource;
- (void)setAdvisory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTransitIncidents:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)transitIncidents;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
