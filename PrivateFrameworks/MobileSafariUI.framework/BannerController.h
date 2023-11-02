
@interface BannerController : NSObject {
    SFPinnableBanner * _appBanner;
    SFPinnableBanner * _crashBanner;
    <BannerControllerDelegate> * _delegate;
    SFPinnableBanner * _privateBrowsingPrivacyProtectionsBanner;
    SFPinnableBanner * _remotelyEnabledExtensionBanner;
    SFPinnableBanner * _tabGroupBanner;
    NSArray * _topBanners;
    SFPinnableBanner * _webExtensionBanner;
    SFPinnableBanner * _webExtensionPermissionGrantedBanner;
}

@property (nonatomic, readonly) SFPinnableBanner *appBanner;
@property (nonatomic, readonly) SFPinnableBanner *crashBanner;
@property (nonatomic) <BannerControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long indexOfFirstBannerSeparableFromStatusBar;
@property (nonatomic, readonly) SFPinnableBanner *privateBrowsingPrivacyProtectionsBanner;
@property (nonatomic, readonly) SFPinnableBanner *remotelyEnabledExtensionBanner;
@property (nonatomic, readonly) SFPinnableBanner *tabGroupBanner;
@property (nonatomic, readonly) NSArray *topBanners;
@property (nonatomic, readonly) NSArray *topBannersAnchoredToStatusBar;
@property (nonatomic, readonly) NSArray *topBannersSeparableFromStatusBar;
@property (nonatomic, readonly) SFPinnableBanner *webExtensionBanner;
@property (nonatomic, readonly) SFPinnableBanner *webExtensionPermissionGrantedBanner;

- (void).cxx_destruct;
- (void)_updateTopBanners;
- (id)appBanner;
- (id)crashBanner;
- (id)delegate;
- (unsigned long long)indexOfFirstBannerSeparableFromStatusBar;
- (id)privateBrowsingPrivacyProtectionsBanner;
- (id)remotelyEnabledExtensionBanner;
- (void)setAppBanner:(id)arg1 animated:(bool)arg2;
- (void)setCrashBanner:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPrivateBrowsingPrivacyProtectionsBanner:(id)arg1 animated:(bool)arg2;
- (void)setRemotelyEnabledExtensionBanner:(id)arg1 animated:(bool)arg2;
- (void)setTabGroupBanner:(id)arg1 animated:(bool)arg2;
- (void)setWebExtensionBanner:(id)arg1 animated:(bool)arg2;
- (void)setWebExtensionPermissionGrantedBanner:(id)arg1 animated:(bool)arg2;
- (id)tabGroupBanner;
- (id)topBanners;
- (id)topBannersAnchoredToStatusBar;
- (id)topBannersSeparableFromStatusBar;
- (id)webExtensionBanner;
- (id)webExtensionPermissionGrantedBanner;

@end
