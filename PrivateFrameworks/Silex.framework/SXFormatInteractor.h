
@interface SXFormatInteractor : NSObject <SXDebugLayoutOptionsObserving, SXFormatInteractor, SXLayoutCoordinatorDelegate, SXNewsletterSubscriptionStatusObserving, SXOfferUpsellScenarioObserving, SXPresentationAttributesObserver, SXSubscriptionActivationEligibilityObserving, SXSubscriptionStatusObserving> {
    <SXDebugLayoutOptionsProviding> * _debugLayoutOptionsProvider;
    <SXFormatInteractorDelegate> * _delegate;
    <SXLayoutCoordinator> * _layoutCoordinator;
    <SXLayoutOptionsFactory> * _layoutOptionsFactory;
    <SXNewsletterSubscriptionStatusProviding> * _newsletterSubscriptionStatusProvider;
    <SXOfferUpsellScenarioProviding> * _offerUpsellScenarioProvider;
    <SXPresentationAttributesProvider> * _presentationAttributesProvider;
    <SXPresentationEnvironment> * _presentationEnvironment;
    <SXRenderingConfigurationProvider> * _renderingConfigurationProvider;
    bool  _requestedContentHiding;
    <SXSubscriptionActivationEligibilityProviding> * _subscriptionActivationEligibilityProvider;
    <SXSubscriptionStatusProviding> * _subscriptionStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SXDebugLayoutOptionsProviding> *debugLayoutOptionsProvider;
@property (nonatomic) <SXFormatInteractorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXLayoutCoordinator> *layoutCoordinator;
@property (nonatomic, readonly) <SXLayoutOptionsFactory> *layoutOptionsFactory;
@property (nonatomic, readonly) <SXNewsletterSubscriptionStatusProviding> *newsletterSubscriptionStatusProvider;
@property (nonatomic, readonly) <SXOfferUpsellScenarioProviding> *offerUpsellScenarioProvider;
@property (nonatomic, readonly) <SXPresentationAttributesProvider> *presentationAttributesProvider;
@property (nonatomic) <SXPresentationEnvironment> *presentationEnvironment;
@property (nonatomic, readonly) <SXRenderingConfigurationProvider> *renderingConfigurationProvider;
@property (nonatomic) bool requestedContentHiding;
@property (nonatomic, readonly) <SXSubscriptionActivationEligibilityProviding> *subscriptionActivationEligibilityProvider;
@property (nonatomic, readonly) <SXSubscriptionStatusProviding> *subscriptionStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)debugLayoutOptionsDidChange:(id)arg1;
- (id)debugLayoutOptionsProvider;
- (id)delegate;
- (id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5 newsletterSubscriptionStatusProvider:(id)arg6 offerUpsellScenarioProvider:(id)arg7 subscriptionActivationEligibilityProvider:(id)arg8 renderingConfigurationProvider:(id)arg9;
- (id)layoutCoordinator;
- (void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2;
- (void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2;
- (id)layoutOptionsFactory;
- (void)newsletterSubscriptionStatusDidChangeFromStatus:(unsigned long long)arg1;
- (id)newsletterSubscriptionStatusProvider;
- (void)offerUpsellScenarioDidChangeFromScenario:(long long)arg1;
- (id)offerUpsellScenarioProvider;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (id)presentationAttributesProvider;
- (id)presentationEnvironment;
- (id)renderingConfigurationProvider;
- (bool)requestedContentHiding;
- (void)setDelegate:(id)arg1;
- (void)setPresentationEnvironment:(id)arg1;
- (void)setRequestedContentHiding:(bool)arg1;
- (void)subscriptionActivationEligibilityDidChangeFromEligibility:(long long)arg1 to:(long long)arg2;
- (id)subscriptionActivationEligibilityProvider;
- (id)subscriptionStatusProvider;
- (void)updateWithPresentationEnvironment:(id)arg1;

@end
