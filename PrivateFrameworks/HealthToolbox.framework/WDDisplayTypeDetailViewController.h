
@interface WDDisplayTypeDetailViewController : HKTableViewController <HKInteractiveChartViewObserver, UITableViewDataSource, UITableViewDelegate, WDSourceOrderObserver, WDUserActivityResponder> {
    NSSet * _availableUnits;
    UIFont * _bodyFont;
    HKDisplayCategory * _displayCategory;
    HKDisplayType * _displayType;
    bool  _inLandscapeMode;
    HKInteractiveChartViewController * _interactiveChartViewController;
    HKNavigationController * _monthNavController;
    _UINavigationControllerPalette * _palette;
    WDProfile * _profile;
    NSMutableArray * _sections;
    NSDate * _selectedDate;
    HKTimeScopeControl * _timeSpanControl;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKInteractiveChartViewController *interactiveChartViewController;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic, retain) NSMutableArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)_attachPaletteIfNecessary;
- (bool)_canSelectUnitsRow;
- (void)_changeTimeScope:(long long)arg1;
- (void)_configureCell:(id)arg1 forTableView:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_detachPaletteIfNecessary;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_selectedUnitCellText;
- (void)_setupObservers;
- (bool)_shouldShowUnitsRow;
- (id)_showAddDataVC:(id)arg1;
- (id)_showAllDataVC:(id)arg1;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)addSectionWithItem:(id)arg1;
- (void)addSectionWithItems:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)bodyFont;
- (void)calculateSections;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)interactiveChartViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (id)sections;
- (void)setBodyFont:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSections:(id)arg1;
- (void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
