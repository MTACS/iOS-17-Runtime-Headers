
@interface PKTextInputDebugSharpenerLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    PKTextInputDebugLogEntryRerun * __currentEntryRerun;
    UITableView * __mainTableView;
    NSMutableDictionary * __rerunResultsBySection;
    UILabel * __tableHeaderLabel;
    PKTextInputDebugSharpenerLog * _sharpenerLog;
    NSURL * _sharpenerLogURL;
}

@property (nonatomic, retain) PKTextInputDebugLogEntryRerun *_currentEntryRerun;
@property (nonatomic, retain) UITableView *_mainTableView;
@property (nonatomic, readonly) NSMutableDictionary *_rerunResultsBySection;
@property (nonatomic, retain) UILabel *_tableHeaderLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKTextInputDebugSharpenerLog *sharpenerLog;
@property (nonatomic, readonly) NSURL *sharpenerLogURL;
@property (readonly) Class superclass;

+ (bool)canLoadFromFileAtURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureCell:(id)arg1 asDrawingDisplayForEntry:(id)arg2;
- (void)_configureCell:(id)arg1 withTitle:(id)arg2 details:(id)arg3;
- (id)_currentEntryRerun;
- (void)_handleActionButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleRerunButton:(id)arg1;
- (id)_mainTableView;
- (void)_rerunRecognitionForEntryAtIndex:(long long)arg1;
- (id)_rerunResultsBySection;
- (id)_tableHeaderLabel;
- (id)_tableHeaderText;
- (id)initWithSharpenerLog:(id)arg1;
- (id)initWithSharpenerLogURL:(id)arg1 error:(id*)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)set_currentEntryRerun:(id)arg1;
- (void)set_mainTableView:(id)arg1;
- (void)set_tableHeaderLabel:(id)arg1;
- (id)sharpenerLog;
- (id)sharpenerLogURL;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
