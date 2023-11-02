
@interface UIPrinterFinishingOption : NSObject <UIPrintOptionListDelegate> {
    UITableView * _finishingOptionsTableView;
    long long  _finishingType;
    NSArray * _optionChoices;
    UIPrintInfo * _printInfo;
    UIPrintPanelViewController * _printPanelViewController;
    UIPrintOptionCell * _printerFinishingOptionCell;
    NSString * _title;
    long long  _viewType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UITableView *finishingOptionsTableView;
@property (nonatomic) long long finishingType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *optionChoices;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (nonatomic, retain) UIPrintOptionCell *printerFinishingOptionCell;
@property (nonatomic) long long selectedChoice;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long viewType;

- (void).cxx_destruct;
- (void)dealloc;
- (id)finishingOptionsTableView;
- (long long)finishingType;
- (id)initWithTitle:(id)arg1 finishingType:(long long)arg2 viewType:(long long)arg3 optionChoices:(id)arg4 printPanelViewController:(id)arg5 finishingOptionsTableView:(id)arg6;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)optionChoices;
- (id)printInfo;
- (id)printPanelViewController;
- (id)printerFinishingOptionCell;
- (long long)selectedChoice;
- (id)selectedItem;
- (void)setFinishingOptionsTableView:(id)arg1;
- (void)setFinishingType:(long long)arg1;
- (void)setOptionChoices:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPanelViewController:(id)arg1;
- (void)setPrinterFinishingOptionCell:(id)arg1;
- (void)setSelectedChoice:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewType:(long long)arg1;
- (id)summary;
- (id)title;
- (void)updateFromPrintInfo;
- (void)updateSwitchValue:(id)arg1;
- (long long)viewType;

@end
