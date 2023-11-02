
@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling> {
    AFSecurityConnection * _assistantSecurityConnection;
    SFMediaRemoteControlCardSection * _cardSection;
    UIViewController * _mediaPlatterViewController;
    <CRKCardSectionViewControllingDelegate> * cardSectionViewControllingDelegate;
}

@property (readonly) SFMediaRemoteControlCardSection *cardSection;
@property (nonatomic) <CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SCKPMediaControlCardSectionView *view;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_nowPlayingViewControllerWithRouteUID:(id)arg1;
- (id)_nowPlayingVisualStylingProvider;
- (void)_updateActiveSystemEndpointForRouteUID:(id)arg1;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (void)_updatePlatterForRouteUID:(id)arg1;
- (id)cardSection;
- (id)cardSectionViewControllingDelegate;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;
- (void)loadView;
- (void)setCardSectionViewControllingDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
