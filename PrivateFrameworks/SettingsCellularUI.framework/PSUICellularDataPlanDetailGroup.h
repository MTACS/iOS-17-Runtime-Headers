
@interface PSUICellularDataPlanDetailGroup : NSObject <PSSpecifierGroup, TSSIMSetupDelegate> {
    TSSIMSetupFlow * _flow;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (readonly) Class superclass;

+ (id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2;
+ (void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3;
+ (id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2;

- (void).cxx_destruct;
- (id)getLogger;
- (id)getPlanCellDataNumber:(id)arg1;
- (id)getPlanDetailedStatus:(id)arg1;
- (id)getPlanExpireDate:(id)arg1;
- (id)getPlanPurchaseDate:(id)arg1;
- (id)getPlanStatus:(id)arg1;
- (id)getPlanStatusDataOnly:(id)arg1;
- (id)getPlanStatusDate:(id)arg1;
- (id)groupSpecifier;
- (void)handleAccountSettingsTapped:(id)arg1;
- (void)handleRemovePlanTapped:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (bool)isFlowRunning;
- (id)lastUpdatedText;
- (id)listController;
- (id)localizedManageAccountAlertTitle:(id)arg1;
- (void)managePlanPressed:(id)arg1;
- (id)removeCellularPlanConfirmationMessage:(id)arg1;
- (id)removeCellularPlanConfirmationTitle:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)specifiers;

@end
