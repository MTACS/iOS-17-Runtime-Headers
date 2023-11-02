
@interface SBSpotlightTransientOverlaySpotlightViewController : SBSpotlightMultiplexingViewController {
    unsigned long long  _presentationSource;
}

@property (nonatomic) unsigned long long presentationSource;

- (bool)_canShowWhileLocked;
- (unsigned long long)level;
- (unsigned long long)presentationSource;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)setPresentationSource:(unsigned long long)arg1;

@end
