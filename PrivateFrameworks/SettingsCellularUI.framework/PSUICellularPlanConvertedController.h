
@interface PSUICellularPlanConvertedController : PSListController {
    CTCellularPlanItem * _planItem;
    PSUICellularPlanUniversalReference * _planReference;
    NSString * _planStatus;
    PSSpecifier * _weakReactivateSpecifier;
    PSSpecifier * _weakStatusSpecifier;
}

@property (nonatomic, retain) CTCellularPlanItem *planItem;
@property (nonatomic, retain) PSUICellularPlanUniversalReference *planReference;
@property (retain) NSString *planStatus;
@property PSSpecifier *weakReactivateSpecifier;
@property PSSpecifier *weakStatusSpecifier;

- (void).cxx_destruct;
- (void)_cellularPlanChanged:(id)arg1;
- (id)_labelSpecifier;
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)arg1;
- (id)_phoneNumber:(id)arg1;
- (id)_phoneNumberSpecifier;
- (id)_planLabel:(id)arg1;
- (id)_reactivateSIMSpecifier;
- (id)_removeSIMSpecifier;
- (id)_simTypeSpecifier;
- (id)_status:(id)arg1;
- (id)_statusSpecifier;
- (id)_turnOnThisLineSpecifier;
- (void)_updatePlanStatus:(id)arg1;
- (void)_updateReactivateSpecifier:(id)arg1;
- (void)_updateStatusSpecifier:(id)arg1;
- (void)dealloc;
- (id)getLogger;
- (id)planItem;
- (id)planReference;
- (id)planStatus;
- (void)setPlanItem:(id)arg1;
- (void)setPlanReference:(id)arg1;
- (void)setPlanStatus:(id)arg1;
- (void)setWeakReactivateSpecifier:(id)arg1;
- (void)setWeakStatusSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (id)weakReactivateSpecifier;
- (id)weakStatusSpecifier;

@end
