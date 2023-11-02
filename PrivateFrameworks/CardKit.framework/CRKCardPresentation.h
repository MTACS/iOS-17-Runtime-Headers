
@interface CRKCardPresentation : NSObject <CRKCardPresenting, CRKCardSectionViewProviderDelegate, CRKCardViewControllerDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, _CRKSendMessageCardFactoryDelegate> {
    _CRKCardSectionViewLoader * _cardSectionViewLoader;
    UIViewController<CRKCardViewControlling> * _cardViewController;
    CRProtocolRestrictedInvocationChain * _cardViewControllerDelegateChain;
    CRKCardPresentationConfiguration * _configuration;
    bool  _debugModeEnabled;
    <CRKCardPresentationDelegate> * _delegate;
    <CRKCardViewControllerDelegate> * _externalCardViewControllerDelegate;
    <CRKIdentifiedProviding> * _loadedCardViewControllerProvider;
}

@property (nonatomic, readonly) <CRCard> *card;
@property (nonatomic, readonly) UIViewController<CRKCardViewControlling> *cardViewController;
@property (nonatomic, copy) CRKCardPresentationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugModeEnabled;
@property (nonatomic) <CRKCardPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)registerProvider:(id)arg1;
+ (void)unregisterProvider:(id)arg1;

- (void).cxx_destruct;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_configureWithRequestedCard:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_establishParsecSessionIfNeeded:(id /* block */)arg1;
- (void)_fullyConfigureWithRequestedCard:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_loadAndRegisterBundleProviders:(id /* block */)arg1;
- (void)_updateViewConfigurationsDebugMode:(bool)arg1;
- (double)boundingWidthForProvider:(id)arg1;
- (id)card;
- (bool)cardSectionDisplayRequiresUserConsentForProvider:(id)arg1;
- (long long)cardSectionViewLoader:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
- (id)cardViewController;
- (void)cardViewController:(id)arg1 requestCardSectionViewSourceForCard:(id)arg2 reply:(id /* block */)arg3;
- (id)configuration;
- (void)configureWithCard:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithCardRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithContent:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (bool)debugModeEnabled;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (id)delegate;
- (id)init;
- (long long)semanticContentAttributeForCardFactory:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDebugModeEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)transitionAnimator:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;

@end
