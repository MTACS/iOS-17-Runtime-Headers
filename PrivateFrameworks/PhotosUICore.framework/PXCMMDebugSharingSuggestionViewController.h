
@interface PXCMMDebugSharingSuggestionViewController : UIViewController <MFMailComposeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _sectionTitles;
    UISegmentedControl * _segmentedControl;
    NSDictionary * _sourceDictionary;
    PHAssetCollection * _sourceSuggestion;
    NSDictionary * _tableContent;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) PHAssetCollection *sourceSuggestion;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (bool)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 sourceSuggestion:(id)arg4 sourceDictionary:(id)arg5;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)_debugDictionary;
- (void)_sendByEmailAction:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)initWithSharingSuggestion:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)segmentedControl;
- (void)setSegmentedControl:(id)arg1;
- (void)setSourceSuggestion:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)sourceSuggestion;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
