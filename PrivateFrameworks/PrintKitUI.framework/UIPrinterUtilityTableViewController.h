
@interface UIPrinterUtilityTableViewController : UITableViewController {
    PKPrinter * _pkPrinter;
    UIPrinterAttributesService * _printerAttributesService;
    long long  _printerNameAndLocationSection;
    NSURL * _printerSuppliesInfoURL;
    NSString * _printerWarning;
    long long  _printerWebPageRow;
    NSURL * _printerWebPageURL;
    long long  _removeKeychainItemSection;
    bool  _showIdentifyPrinterItem;
    bool  _showRemoveKeychainItem;
    bool  _suppliesCheckComplete;
    long long  _suppliesSection;
    NSArray * _supplyData;
}

@property PKPrinter *pkPrinter;
@property (retain) UIPrinterAttributesService *printerAttributesService;
@property long long printerNameAndLocationSection;
@property (retain) NSURL *printerSuppliesInfoURL;
@property (retain) NSString *printerWarning;
@property long long printerWebPageRow;
@property (retain) NSURL *printerWebPageURL;
@property long long removeKeychainItemSection;
@property bool showIdentifyPrinterItem;
@property bool showRemoveKeychainItem;
@property bool suppliesCheckComplete;
@property long long suppliesSection;
@property (nonatomic, retain) NSArray *supplyData;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pkPrinter;
- (id)printerAttributesService;
- (long long)printerNameAndLocationSection;
- (id)printerSuppliesInfoURL;
- (id)printerWarning;
- (long long)printerWebPageRow;
- (id)printerWebPageURL;
- (void)reloadPrinterInfoViews;
- (long long)removeKeychainItemSection;
- (void)setPkPrinter:(id)arg1;
- (void)setPrinterAttributesService:(id)arg1;
- (void)setPrinterNameAndLocationSection:(long long)arg1;
- (void)setPrinterSuppliesInfoURL:(id)arg1;
- (void)setPrinterWarning:(id)arg1;
- (void)setPrinterWebPageRow:(long long)arg1;
- (void)setPrinterWebPageURL:(id)arg1;
- (void)setRemoveKeychainItemSection:(long long)arg1;
- (void)setShowIdentifyPrinterItem:(bool)arg1;
- (void)setShowRemoveKeychainItem:(bool)arg1;
- (void)setSuppliesCheckComplete:(bool)arg1;
- (void)setSuppliesSection:(long long)arg1;
- (void)setSupplyData:(id)arg1;
- (bool)showIdentifyPrinterItem;
- (bool)showRemoveKeychainItem;
- (void)startPrinterWarningPoll;
- (void)stopPrinterWarningPolling;
- (bool)suppliesCheckComplete;
- (long long)suppliesSection;
- (id)supplyData;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
