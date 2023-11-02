
@interface UIPrintFeedFromOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSIndexPath * _selectedIndexPath;
    NSMutableArray * _trayNames;
    NSArray * _trays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *trayNames;
@property (nonatomic, retain) NSArray *trays;

- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (id)selectedTrayName;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTrayNames:(id)arg1;
- (void)setTrays:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)summaryString;
- (id)trayNames;
- (id)trays;
- (void)updateFromPrintInfo;

@end
