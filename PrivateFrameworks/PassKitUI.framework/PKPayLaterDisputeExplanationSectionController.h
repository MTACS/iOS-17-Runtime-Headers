
@interface PKPayLaterDisputeExplanationSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan * _financingPlan;
    UIImageSymbolConfiguration * _iconFontConfiguration;
    unsigned long long  _layout;
    double  _maxIconWidth;
}

- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)arg1 snapshot:(id)arg2;
- (id)_firstSectionIdentifier;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 layout:(unsigned long long)arg3 dynamicContentPage:(id)arg4 viewControllerDelegate:(id)arg5;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
