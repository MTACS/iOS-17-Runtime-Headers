
@interface UIPrintMediaTypeOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSMutableArray * _mediaTypeNames;
    NSArray * _mediaTypes;
    NSIndexPath * _selectedIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mediaTypeNames;
@property (nonatomic, retain) NSArray *mediaTypes;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (id)mediaTypeNames;
- (id)mediaTypes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (id)selectedIndexPath;
- (id)selectedItem;
- (id)selectedMediaTypeName;
- (void)setMediaTypeNames:(id)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)summaryString;
- (void)updateFromPrintInfo;

@end
