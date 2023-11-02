
@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource> {
    NSDictionary * _debugDictionary;
    NSArray * _sectionTitles;
    UISegmentedControl * _segmentedControl;
    NSDictionary * _tableContent;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *debugDictionary;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sectionTitles;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tableContent;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)_flattenDictionary:(id)arg1;
- (id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2;
- (void)_switchLogsAction:(id)arg1;
- (void)_updateWithSegmentedTitle:(id)arg1;
- (id)debugDictionary;
- (id)initWithDebugDictionary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionTitles;
- (id)segmentedControl;
- (id)segmentedTitles;
- (void)setSectionTitles:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setTableContent:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableContent;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
