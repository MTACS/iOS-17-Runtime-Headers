
@protocol PKPayLaterProductOptionsSectionControllerDelegate <PKPayLaterViewControllerDelegate>

@required

- (void)productOptionsSectionController:(PKPayLaterProductOptionsSectionController *)arg1 didSelectFinancingOption:(PKPayLaterFinancingOption *)arg2;
- (void)productOptionsSectionController:(PKPayLaterProductOptionsSectionController *)arg1 didSelectPreliminaryAssessment:(PKPayLaterPreliminaryAssessment *)arg2;
- (void)reloadAllSectionsAnimated:(bool)arg1;

@end
