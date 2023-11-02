
@interface EKICSPreviewListController : UITableViewController {
    bool  _allowsImport;
    bool  _allowsSubitems;
    <EKICSPreviewListDelegate> * _listDelegate;
    EKICSPreviewModel * _model;
    struct CGColor { } * _overrideCalendarColor;
    NSMutableArray * _sections;
    bool  _showWeekNumbers;
}

@property (nonatomic) bool allowsImport;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) <EKICSPreviewListDelegate> *listDelegate;
@property (nonatomic) struct CGColor { }*overrideCalendarColor;
@property (nonatomic) bool showWeekNumbers;

- (void).cxx_destruct;
- (id)_timeZone;
- (bool)allowsImport;
- (bool)allowsSubitems;
- (void)buildSections;
- (void)dealloc;
- (void)importAllPressed:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)listDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGColor { }*)overrideCalendarColor;
- (void)setAllowsImport:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setListDelegate:(id)arg1;
- (void)setOverrideCalendarColor:(struct CGColor { }*)arg1;
- (void)setShowWeekNumbers:(bool)arg1;
- (bool)showWeekNumbers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateImportButton;
- (void)viewDidLoad;

@end
