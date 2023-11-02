
@interface PKPayLaterFinancingPlanCancellationSectionController : PKPayLaterSectionController {
    <PKPayLaterFinancingPlanCancellationSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingPlan * _financingPlan;
    NSMutableDictionary * _pageItemByIdentifier;
    NSMutableDictionary * _rowsByIdentifier;
    NSString * _selectedIdentifier;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;

- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)arg1 sectionIndex:(long long)arg2 snapshot:(id)arg3;
- (id)_firstSectionIdentifier;
- (id)_identifierForRowItem:(id)arg1;
- (id)financingPlan;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 dynamicContentPage:(id)arg3 viewControllerDelegate:(id)arg4;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setFinancingPlan:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
