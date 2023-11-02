
@interface PSUIPlanPendingTransferMenusGroup : NSObject <PSSpecifierGroup> {
    CTCellularPlanManager * _cellularPlanManager;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
    PSUICellularPlanManagerCache * _planManagerCache;
    CTCellularPlanPendingTransfer * _planPendingTransfer;
}

@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) PSSpecifier *parentSpecifier;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activatePlanSpecifier;
- (void)addSpecifierForHeaderString:(id)arg1;
- (id)cancelConsentRequestSpecifier;
- (id)cellularPlanManager;
- (id)getLogger;
- (id)groupSpecifier;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (id)parentSpecifier;
- (id)planActivationInfo;
- (id)planManagerCache;
- (id)planPendingTransfer;
- (id)planPendingTransferLabel:(id)arg1;
- (id)planPendingTransferNumber:(id)arg1;
- (void)removePlanPendingTransfer:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPlanPendingTransfer:(id)arg1;
- (id)specifiers;

@end
