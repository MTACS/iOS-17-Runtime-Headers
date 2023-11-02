
@protocol PKPayLaterFundingSourceSectionControllerDelegate <PKPayLaterViewControllerDelegate>

@required

- (void)didSelectFundingSource:(PKPayLaterPaymentSource *)arg1;
- (void)didTapHyperLink:(PKApplyFooterContentLink *)arg1;
- (void)didUpdateAutoPayment:(bool)arg1;
- (void)reloadFundingSources;

@end
