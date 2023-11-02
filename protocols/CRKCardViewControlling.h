
@protocol CRKCardViewControlling <CRKEventResponding, CRKFeedbackDelegate, CRCommandHandling>

@required

- (<CRCard> *)card;
- (<CRKCardSectionViewSourcing> *)cardSectionViewSource;
- (<CRKCardViewControllerDelegate> *)cardViewControllerDelegate;
- (double)contentHeightForWidth:(double)arg1;
- (void)setCard:(id <CRCard>)arg1;
- (void)setCardSectionViewSource:(id <CRKCardSectionViewSourcing>)arg1;
- (void)setCardViewControllerDelegate:(id <CRKCardViewControllerDelegate>)arg1;

@end
