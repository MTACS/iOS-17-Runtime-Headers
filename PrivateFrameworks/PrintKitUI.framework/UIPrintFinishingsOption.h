
@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate> {
    UITableView * _finishingOptionsTableView;
    UIPrintFinishingTemplatesOption * _finishingTemplatesOption;
    NSArray * _printerFinishingOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITableView *finishingOptionsTableView;
@property (nonatomic, retain) UIPrintFinishingTemplatesOption *finishingTemplatesOption;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *printerFinishingOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearFinishingOptions;
- (void)currentPrinterChanged;
- (void)dealloc;
- (id)finishingOptionsTableView;
- (id)finishingTemplatesOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printerFinishingOptions;
- (void)setFinishingOptionsTableView:(id)arg1;
- (void)setFinishingTemplatesOption:(id)arg1;
- (void)setPrinterFinishingOptions:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)summaryString;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)title;
- (void)updateFromPrintInfo;

@end
