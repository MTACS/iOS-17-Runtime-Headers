
@interface TransferBackPlanCache : NSObject <TSSIMSetupDelegate> {
    NSTimer * _activateTimer;
    <PSUIReActivateSIMSpecifierModelDelegate> * _delegate;
    NSArray * _existedIccids;
    NSError * _failureWebsheetError;
    TSSIMSetupFlow * _flow;
    NSString * _installingIccid;
    bool  _isPlanReactivated;
    UINavigationController * _navigationController;
    UIViewController * _rootViewController;
    id  _transferBackItem;
    NSError * _transferError;
    CTCellularPlanItem * _transferToItem;
}

@property (retain) NSTimer *activateTimer;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <PSUIReActivateSIMSpecifierModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *existedIccids;
@property (retain) NSError *failureWebsheetError;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (retain) NSString *installingIccid;
@property bool isPlanReactivated;
@property UINavigationController *navigationController;
@property (retain) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (retain) id transferBackItem;
@property (retain) NSError *transferError;
@property (retain) CTCellularPlanItem *transferToItem;

- (void).cxx_destruct;
- (bool)_canLaunchSIMSetupFlow;
- (void)_handleActivateExpiry;
- (void)_prepareSIMSetupFlow;
- (void)_presentViewController:(id)arg1;
- (void)_showWifiAlert;
- (void)_useLine:(bool)arg1 forPlan:(id)arg2;
- (id)activateTimer;
- (void)cellularPlanChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)existedIccids;
- (id)failureWebsheetError;
- (id)flow;
- (id)getLogger;
- (id)initWithDelegate:(id)arg1 navigationController:(id)arg2 transferBackPlan:(id)arg3;
- (id)installingIccid;
- (bool)isPlanReactivated;
- (id)navigationController;
- (id)rootViewController;
- (void)setActivateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExistedIccids:(id)arg1;
- (void)setFailureWebsheetError:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setInstallingIccid:(id)arg1;
- (void)setIsPlanReactivated:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setTransferBackItem:(id)arg1;
- (void)setTransferError:(id)arg1;
- (void)setTransferToItem:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)transferBack:(id)arg1;
- (id)transferBackItem;
- (id)transferError;
- (id)transferToItem;

@end
