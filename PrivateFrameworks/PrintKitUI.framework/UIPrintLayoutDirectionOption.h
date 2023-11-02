
@interface UIPrintLayoutDirectionOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSArray * _layoutDirectionOptions;
    NSIndexPath * _selectedIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutDirectionOptions;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (id)layoutDirectionOptions;
- (long long)listItemSelected:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setLayoutDirectionOptions:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)shortSummary;
- (id)summaryString;
- (void)updateFromPrintInfo;

@end
