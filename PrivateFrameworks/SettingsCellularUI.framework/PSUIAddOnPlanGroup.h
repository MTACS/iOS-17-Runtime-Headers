
@interface PSUIAddOnPlanGroup : NSObject <PSSpecifierGroup, TSSIMSetupDelegate> {
    NSString * _carrierName;
    PSUICellularPlanManagerCache * _cellularPlanManager;
    CTCellularPlanManager * _ctCellularPlanManager;
    TSSIMSetupFlow * _flow;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    NSMutableArray * _remotePlansSpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (void)_handleAddRemotePlan:(id)arg1;
- (id)flow;
- (id)getLogger;
- (id)init;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)listController;
- (void)setFlow:(id)arg1;
- (void)setListController:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)specifiers;
- (id)specifiersForRemotePlans;

@end
