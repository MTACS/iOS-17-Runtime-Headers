
@interface CRKCardSectionViewConfiguration : NSObject {
    CRKCardSectionViewController * _cardKitCardSectionViewController;
    <CRCardSection> * _cardSection;
    UIView<CRKCardSectionView> * _cardSectionView;
    UIViewController<CRKCardSectionViewControlling> * _cardSectionViewController;
    bool  _debugModeEnabled;
    _CRKDebugOverlayView * _debugOverlayView;
    <CRKFeedbackDelegateProxying> * _feedbackDelegateProxy;
    NSString * _providerIdentifier;
}

@property (getter=_cardKitCardSectionViewController, setter=_setCardKitCardSectionViewController:, nonatomic, retain) CRKCardSectionViewController *cardKitCardSectionViewController;
@property (nonatomic, retain) <CRCardSection> *cardSection;
@property (nonatomic, retain) UIView<CRKCardSectionView> *cardSectionView;
@property (nonatomic, retain) UIViewController<CRKCardSectionViewControlling> *cardSectionViewController;
@property (getter=_debugModeEnabled, setter=_setDebugModeEnabled:, nonatomic) bool debugModeEnabled;
@property (getter=_debugOverlayView, setter=_setDebugOverlayView:, nonatomic, retain) _CRKDebugOverlayView *debugOverlayView;
@property (nonatomic, retain) <CRKFeedbackDelegateProxying> *feedbackDelegateProxy;
@property (getter=_providerIdentifier, setter=_setProviderIdentifier:, nonatomic, copy) NSString *providerIdentifier;

- (void).cxx_destruct;
- (id)_cardKitCardSectionViewController;
- (bool)_debugModeEnabled;
- (id)_debugOverlayView;
- (id)_providerIdentifier;
- (void)_setCardKitCardSectionViewController:(id)arg1;
- (void)_setDebugModeEnabled:(bool)arg1;
- (void)_setDebugOverlayView:(id)arg1;
- (void)_setProviderIdentifier:(id)arg1;
- (void)_updateDebugOverlayViewText:(id)arg1;
- (id)cardSection;
- (id)cardSectionView;
- (id)cardSectionViewController;
- (id)feedbackDelegateProxy;
- (void)setCardSection:(id)arg1;
- (void)setCardSectionView:(id)arg1;
- (void)setCardSectionViewController:(id)arg1;
- (void)setFeedbackDelegateProxy:(id)arg1;

@end
