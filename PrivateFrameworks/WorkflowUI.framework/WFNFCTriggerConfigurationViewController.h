
@interface WFNFCTriggerConfigurationViewController : WFTriggerConfigurationViewController <NFReaderSessionDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)alertTextFieldDidChange:(id)arg1;
- (id)customSections;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)showNameStep;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)updateUI;
- (void)viewWillAppear:(bool)arg1;

@end
