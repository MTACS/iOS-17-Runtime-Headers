
@interface PSUICarrierListController : PSListController {
    PSSpecifier * _addOnGroupSpecifier;
    PSUIAddOnPlanGroup * _addOnPlanGroup;
    UIBarButtonItem * _cancelButton;
    PSUICarrierItemGroup * _carrierItemGroup;
    PSSpecifier * _carrierItemGroupSpecifier;
}

@property (nonatomic, retain) PSUIAddOnPlanGroup *addOnPlanGroup;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) PSUICarrierItemGroup *carrierItemGroup;

- (void).cxx_destruct;
- (void)addCancelButton;
- (id)addOnGroupSpecifier;
- (id)addOnPlanGroup;
- (id)cancelButton;
- (id)carrierItemGroup;
- (id)carrierItemGroupSpecifier;
- (void)cellularPlanChanged:(id)arg1;
- (id)createAddCellularPlanSpecifierIfNeeded:(id)arg1;
- (id)createCarrierItemGroupIfNeeded:(id)arg1;
- (void)dismiss;
- (id)init;
- (void)loadView;
- (void)setAddOnPlanGroup:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCarrierItemGroup:(id)arg1;
- (id)specifiers;

@end
