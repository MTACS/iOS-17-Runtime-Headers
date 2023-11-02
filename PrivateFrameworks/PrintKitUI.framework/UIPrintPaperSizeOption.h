
@interface UIPrintPaperSizeOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSArray * _loadedPaperNames;
    NSArray * _loadedPaperSizes;
    UIPrinter * _observedPrinter;
    NSObject<OS_dispatch_queue> * _pkPrinterQueue;
    NSIndexPath * _selectedIndexPath;
    NSArray * _supportedPaperNames;
    NSArray * _supportedPaperSizes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *loadedPaperNames;
@property (nonatomic, retain) NSArray *loadedPaperSizes;
@property (nonatomic, retain) UIPrinter *observedPrinter;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedPaperNames;
@property (nonatomic, retain) NSArray *supportedPaperSizes;

- (void).cxx_destruct;
- (id)_removeRollsFrom:(id)arg1;
- (void)currentPrinterChanged;
- (void)dealloc;
- (id)defaultPaperIndex;
- (void)didSelectPrintOption;
- (id)getPaperNames:(id)arg1;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (id)loadedPaperNames;
- (id)loadedPaperSizes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedPrinter;
- (id)paperList;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setLoadedPaperNames:(id)arg1;
- (void)setLoadedPaperSizes:(id)arg1;
- (void)setObservedPrinter:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSupportedPaperNames:(id)arg1;
- (void)setSupportedPaperSizes:(id)arg1;
- (id)summary;
- (id)supportedPaperNames;
- (id)supportedPaperSizes;
- (void)updateSelectedPaper;

@end
