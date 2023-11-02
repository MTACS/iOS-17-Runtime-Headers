
@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup, TSSIMSetupDelegate> {
    PSUIAddCellularPlanSpecifier * _addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier * _addCellularPlanSpecifierStandard;
    PSUICellularPlanManagerCache * _cellularPlanManagerCache;
    CTCellularPlanManager * _ctCellularPlanManager;
    TSSIMSetupFlow * _flow;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLocationFooterIfNecessary;
- (void)_handleAddCarrierItem:(id)arg1 specifier:(id)arg2;
- (id)addCellularPlanSpecifier;
- (void)carrierItemPressed:(id)arg1;
- (id)getLogger;
- (id)groupSpecifier;
- (bool)hasCarrierItems;
- (id)init;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)listController;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)specifiers;
- (id)specifiersForCarrierItems;
- (void)turnOnLocationServicesPressed:(id)arg1;

@end
