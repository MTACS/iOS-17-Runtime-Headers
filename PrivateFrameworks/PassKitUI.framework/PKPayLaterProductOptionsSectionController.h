
@interface PKPayLaterProductOptionsSectionController : PKPayLaterSectionController {
    <PKPayLaterProductOptionsSectionControllerDelegate> * _delegate;
    NSDictionary * _formattedIdentifiersByProductType;
    NSNumberFormatter * _numberFormatter;
    PKPayLaterSetupFlowController * _setupController;
    bool  _showAllOptions;
    NSArray * _sortedProductTypeSections;
}

- (void).cxx_destruct;
- (void)_configureProductSectionWithSectionIdentifier:(id)arg1 snapshot:(id)arg2;
- (void)_configureShowMoreOptionsButtonSectionWithSnapshot:(id)arg1;
- (id)_productAssessmentForSectionIdentifier:(id)arg1 outIndex:(long long*)arg2;
- (long long)_productAssessmentInstallmentCount:(id)arg1;
- (id)_productTileDetailRowForProductAssessment:(id)arg1 installmentIndex:(long long)arg2;
- (id)_tileDetailRowWithTitle:(id)arg1 subtitle:(id)arg2 text:(id)arg3 detailText:(id)arg4 textSubtitle:(id)arg5 customView:(id)arg6 financingOption:(id)arg7 preliminaryAssessment:(id)arg8;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPage:(id)arg2 delegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
