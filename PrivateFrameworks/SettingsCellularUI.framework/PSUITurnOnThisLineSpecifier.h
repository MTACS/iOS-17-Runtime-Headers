
@interface PSUITurnOnThisLineSpecifier : PSSpecifier <CXCallObserverDelegate> {
    PSUICoreTelephonyCallCache * _callCache;
    CXCallObserver * _callObserver;
    CTCellularPlanManager * _cellularPlanManager;
    PSListController * _hostController;
    PSUICellularPlanManagerCache * _planManagerCache;
    PSUICellularPlanUniversalReference * _planReference;
}

@property (nonatomic, retain) PSUICoreTelephonyCallCache *callCache;
@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSUICellularPlanUniversalReference *planReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getAlertMessage:(id)arg1 onPad:(bool)arg2;
- (void)_showPromptFor:(id)arg1;
- (void)_turnItOff;
- (void)_useLine:(bool)arg1 forPlan:(id)arg2;
- (id)callCache;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)cellularPlanManager;
- (id)getLogger;
- (id)hostController;
- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 hostController:(id)arg5 isActivating:(bool)arg6;
- (id)isPlanEnabled:(id)arg1;
- (bool)isPlanStatusActivatingPostinstall:(id)arg1;
- (bool)isTransferredPlan:(id)arg1;
- (id)planManagerCache;
- (id)planReference;
- (void)setCallCache:(id)arg1;
- (void)setCallObserver:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setPlanEnabled:(id)arg1 specifier:(id)arg2;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPlanReference:(id)arg1;
- (void)setSwitchEnabled;

@end
