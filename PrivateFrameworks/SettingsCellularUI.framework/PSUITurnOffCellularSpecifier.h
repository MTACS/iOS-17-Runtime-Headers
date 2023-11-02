
@interface PSUITurnOffCellularSpecifier : PSSpecifier <CXCallObserverDelegate> {
    PSUICoreTelephonyCallCache * _callCache;
    CXCallObserver * _callObserver;
    NSNumber * _cellularOff;
    PSListController * _hostController;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic, retain) PSUICoreTelephonyCallCache *callCache;
@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic, retain) NSNumber *cellularOff;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disableCellular:(bool)arg1;
- (void)_showPopup;
- (id)callCache;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)cellularOff;
- (id)getLogger;
- (id)hostController;
- (id)initWithContext:(id)arg1 callCache:(id)arg2 hostController:(id)arg3;
- (id)isCellularOff:(id)arg1;
- (void)setCallCache:(id)arg1;
- (void)setCallObserver:(id)arg1;
- (void)setCellularOff:(id)arg1;
- (void)setCellularOff:(id)arg1 specifier:(id)arg2;
- (void)setHostController:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (void)setSwitchEnabled;
- (id)subscriptionContext;

@end
