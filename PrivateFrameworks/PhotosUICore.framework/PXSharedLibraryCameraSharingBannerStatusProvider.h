
@interface PXSharedLibraryCameraSharingBannerStatusProvider : PXObservable <PXPreferencesObserver> {
    bool  _shouldShowBanner;
}

@property (nonatomic) bool shouldShowBanner;

- (void)_significantTimeChange:(id)arg1;
- (void)_updateShouldShowBanner;
- (id)init;
- (void)preferencesDidChange;
- (void)setShouldShowBanner:(bool)arg1;
- (bool)shouldShowBanner;

@end
