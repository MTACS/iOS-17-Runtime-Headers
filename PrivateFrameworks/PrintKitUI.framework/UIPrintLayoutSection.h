
@interface UIPrintLayoutSection : UIPrintOptionSection <UITableViewDataSource, UITableViewDelegate> {
    UIPrintBorderOption * _borderPrintOption;
    UIPrintFlipHorizontalOption * _flipHorizontalPrintOption;
    UIPrintLayoutDirectionOption * _layoutDirectionPrintOption;
    UITableViewController * _layoutSectionController;
    UIPrintPagesPerSheetOption * _pagesPerSheetPrintOption;
}

@property (nonatomic, retain) UIPrintBorderOption *borderPrintOption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPrintFlipHorizontalOption *flipHorizontalPrintOption;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPrintLayoutDirectionOption *layoutDirectionPrintOption;
@property (nonatomic, retain) UITableViewController *layoutSectionController;
@property (nonatomic, retain) UIPrintPagesPerSheetOption *pagesPerSheetPrintOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)borderPrintOption;
- (void)dealloc;
- (void)didSelectPrintOptionSection;
- (id)flipHorizontalPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)layoutDirectionPrintOption;
- (id)layoutSectionController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pagesPerSheetPrintOption;
- (id)printOptionAtIndexPath:(id)arg1;
- (void)setBorderPrintOption:(id)arg1;
- (void)setFlipHorizontalPrintOption:(id)arg1;
- (void)setLayoutDirectionPrintOption:(id)arg1;
- (void)setLayoutSectionController:(id)arg1;
- (void)setPagesPerSheetPrintOption:(id)arg1;
- (bool)shouldShow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)updatePrintOptionsList;

@end
