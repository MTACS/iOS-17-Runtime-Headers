
@protocol CRKCardViewControllerDelegate <CRFeedbackListener, CRCommandHandling>

@optional

- (<CRCard> *)baseCardForCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (bool)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (struct CGSize { double x1; double x2; })cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(void *)arg1 requestCardSectionViewSourceForCard:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: UIViewController<CRKCardViewControlling> *, <CRCard> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRKCardSectionViewSourcing> *, NSError *, void*
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (bool)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id <CRKCardSectionViewProviderManaging>)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)cardViewControllerBoundsDidChange:(UIViewController<CRKCardViewControlling> *)arg1;
- (void)cardViewControllerDidLoad:(UIViewController<CRKCardViewControlling> *)arg1;
- (unsigned long long)navigationIndexOfCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (bool)performBeganEditingCommand:(CRBeganEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performFinishedEditingCommand:(CRFinishedEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performInvocationPayloadCommand:(CRInvocationPayloadCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (bool)performRequestUserConfirmationCommand:(CRRequestUserConfirmationCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;

@end
