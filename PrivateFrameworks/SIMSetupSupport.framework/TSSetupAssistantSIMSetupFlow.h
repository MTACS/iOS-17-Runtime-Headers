
@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    NSMutableArray * _currentItemsForIMessage;
    NSMutableArray * _danglingPlanItems;
    bool  _forceDualSIMSetup;
    NSString * _iccid;
    bool  _inBuddy;
    bool  _showAddPlan;
}

@property (retain) NSMutableArray *currentItemsForIMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool inBuddy;
@property (readonly) Class superclass;

+ (void)needsToRun:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_needCustomizeBackAction:(id)arg1;
- (id)currentItemsForIMessage;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (bool)inBuddy;
- (id)init;
- (id)initWithIccid:(id)arg1 showAddPlan:(bool)arg2 forceDualSIMSetup:(bool)arg3 allowDismiss:(bool)arg4;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setCurrentItemsForIMessage:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setInBuddy:(bool)arg1;

@end
