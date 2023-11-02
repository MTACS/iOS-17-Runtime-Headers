
@interface PTUIChoiceViewController : UITableViewController <PTRowObserver> {
    PTChoiceRow * _row;
    NSIndexPath * _valueIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTChoiceRow *row;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_checkAppropriateCell;
- (void)dealloc;
- (id)initWithPresentingRow:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)row;
- (void)rowDidChangeValue:(id)arg1;
- (void)rowDidReload:(id)arg1;
- (void)setRow:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
