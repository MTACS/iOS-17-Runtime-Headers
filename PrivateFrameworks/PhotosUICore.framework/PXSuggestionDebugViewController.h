
@interface PXSuggestionDebugViewController : UIViewController <MFMailComposeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _sectionTitles;
    UISegmentedControl * _segmentedControl;
    NSDictionary * _sourceDictionary;
    PHSuggestion * _suggestion;
    NSDictionary * _suggestionInfo;
    NSDictionary * _tableContent;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)existingSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;
- (id)infoSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 compact:(bool)arg3;
- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
