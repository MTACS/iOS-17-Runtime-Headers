
@interface DSWifiSyncDetailController : DSTableWelcomeController {
    <DSWifiSyncDelegate> * _delegate;
    NSMutableArray * _orderedCells;
    DSPairedComputer * _pairedComputer;
}

@property (nonatomic) <DSWifiSyncDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *orderedCells;
@property (nonatomic, retain) DSPairedComputer *pairedComputer;

- (void).cxx_destruct;
- (void)back;
- (id)cellWithText:(id)arg1 secondaryText:(id)arg2;
- (id)dateDescription;
- (id)delegate;
- (id)initWithPairedComputer:(id)arg1;
- (id)orderedCells;
- (id)pairedComputer;
- (void)returnFromDetailAndRemoveComputer;
- (void)setDelegate:(id)arg1;
- (void)setOrderedCells:(id)arg1;
- (void)setPairedComputer:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
