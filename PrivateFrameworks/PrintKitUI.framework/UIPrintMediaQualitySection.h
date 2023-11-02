
@interface UIPrintMediaQualitySection : UIPrintOptionSection <UITableViewDataSource, UITableViewDelegate> {
    UIPrintFeedFromOption * _feedFromPrintOption;
    long long  _feedFromRow;
    UITableViewController * _mediaQualitySectionController;
    UIPrintMediaTypeOption * _mediaTypePrintOption;
    long long  _mediaTypeRow;
    UIPrintQualityOption * _qualityPrintOption;
    long long  _qualitySectionNum;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPrintFeedFromOption *feedFromPrintOption;
@property (nonatomic) long long feedFromRow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITableViewController *mediaQualitySectionController;
@property (nonatomic, retain) UIPrintMediaTypeOption *mediaTypePrintOption;
@property (nonatomic) long long mediaTypeRow;
@property (nonatomic, retain) UIPrintQualityOption *qualityPrintOption;
@property (nonatomic) long long qualitySectionNum;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)dealloc;
- (void)didSelectPrintOptionSection;
- (id)feedFromPrintOption;
- (long long)feedFromRow;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)mediaQualitySectionController;
- (id)mediaTypePrintOption;
- (long long)mediaTypeRow;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)qualityPrintOption;
- (long long)qualitySectionNum;
- (void)setFeedFromPrintOption:(id)arg1;
- (void)setFeedFromRow:(long long)arg1;
- (void)setMediaQualitySectionController:(id)arg1;
- (void)setMediaTypePrintOption:(id)arg1;
- (void)setMediaTypeRow:(long long)arg1;
- (void)setQualityPrintOption:(id)arg1;
- (void)setQualitySectionNum:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)updatePrintOptionsList;

@end
