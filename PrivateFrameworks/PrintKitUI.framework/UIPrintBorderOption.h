
@interface UIPrintBorderOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSArray * _borderTypeNames;
    NSIndexPath * _selectedIndexPath;
}

@property (nonatomic, retain) NSArray *borderTypeNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)borderTypeNames;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setBorderTypeNames:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)shortSummary;
- (id)summaryString;
- (void)updateFromPrintInfo;

@end
