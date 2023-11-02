
@interface WFDiagnosticsViewController : WFInsetTableViewController {
    NSString * _comment;
    id /* block */  _saveHandler;
    bool  _saving;
    NSOrderedSet * _sections;
    bool  _showNANUI;
}

@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (nonatomic) bool saving;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic) bool showNANUI;

- (void).cxx_destruct;
- (id)_defaultSections;
- (id)comment;
- (id)initWithNANUI:(bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id /* block */)saveHandler;
- (bool)saving;
- (id)sections;
- (void)setComment:(id)arg1;
- (void)setSaveHandler:(id /* block */)arg1;
- (void)setSaving:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setShowNANUI:(bool)arg1;
- (bool)showNANUI;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
