
@interface PUImportActionCoordinator : NSObject {
    NSByteCountFormatter * _byteCountFormatter;
    PLCacheDeleteClient * _cacheDeleteClient;
    <PUImportActionCoordinatorDelegate> * _delegate;
    UIMenu * _importActionsMenu;
    UIAction * _importAllAction;
    PXImportController * _importController;
    NSString * _loggingPrefix;
    long long  _loggingSource;
    NSNumberFormatter * _percentageNumberFormatter;
    bool  _ppt_alwaysImportDuplicatesNoPrompt;
    bool  _presentsAdditionalDeleteAllConfirmation;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSByteCountFormatter *byteCountFormatter;
@property (nonatomic, retain) PLCacheDeleteClient *cacheDeleteClient;
@property (nonatomic) <PUImportActionCoordinatorDelegate> *delegate;
@property (nonatomic, retain) UIMenu *importActionsMenu;
@property (nonatomic, retain) UIAction *importAllAction;
@property (nonatomic, retain) PXImportController *importController;
@property (nonatomic, retain) NSString *loggingPrefix;
@property (nonatomic, readonly) long long loggingSource;
@property (nonatomic, retain) NSNumberFormatter *percentageNumberFormatter;
@property (nonatomic) bool ppt_alwaysImportDuplicatesNoPrompt;
@property (nonatomic) bool presentsAdditionalDeleteAllConfirmation;
@property (nonatomic) UIViewController *viewController;

+ (id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2;
+ (long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2;
+ (float)lowBatteryLevelThresholdForDevice;
+ (void)retrieveBatteryState:(long long*)arg1 batteryLevel:(float*)arg2;

- (void).cxx_destruct;
- (void)_commitImportingItems:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_handleDiskAvailabilityRequestForItems:(id)arg1 withSuccess:(bool)arg2 numBytesPurged:(long long)arg3 additionalBytesRequired:(long long)arg4 error:(id)arg5;
- (void)_importItems:(id)arg1 allowDuplicates:(bool)arg2;
- (void)_presentInsufficientDiskSpaceAlertForItems:(id)arg1;
- (id)actionMenuForImportButton;
- (id)byteCountFormatter;
- (id)cacheDeleteClient;
- (void)checkBatteryLevelWithCompletion:(id /* block */)arg1;
- (void)configureImportActionsForBarButtonItem:(id)arg1;
- (id)delegate;
- (void)deleteItemsFromBarButtonItem:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2;
- (void)deleteItemsWithoutConfirmation:(id)arg1;
- (id)importActionsMenu;
- (id)importAllAction;
- (void)importAllFromBarButtonItem;
- (id)importController;
- (id)initWithViewController:(id)arg1 importController:(id)arg2 loggingSource:(long long)arg3;
- (id)loggingPrefix;
- (long long)loggingSource;
- (void)notifyDelegateOfImportCancellation;
- (id)percentageNumberFormatter;
- (bool)ppt_alwaysImportDuplicatesNoPrompt;
- (void)ppt_beginImportFromBarButtonItem;
- (bool)presentsAdditionalDeleteAllConfirmation;
- (void)setByteCountFormatter:(id)arg1;
- (void)setCacheDeleteClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImportActionsMenu:(id)arg1;
- (void)setImportAllAction:(id)arg1;
- (void)setImportController:(id)arg1;
- (void)setLoggingPrefix:(id)arg1;
- (void)setPercentageNumberFormatter:(id)arg1;
- (void)setPpt_alwaysImportDuplicatesNoPrompt:(bool)arg1;
- (void)setPresentsAdditionalDeleteAllConfirmation:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)someItemsButNotAllAreSelected;
- (void)stopImport;
- (id)viewController;

@end
