
@interface HUBannerItemProvider : HFStaticItemProvider {
    HUCameraUpgradeOfferBannerItem * _cameraUpgradeOfferBannerItem;
    HMHome * _home;
    HUHomeHubMigrationBannerItem * _homeHubMigrationBannerItem;
    HUMultiUserTokenFixBannerItem * _multiUserTokenFixBannerItem;
    HUSetupBannerItem * _setupBannerItem;
}

@property (nonatomic, readonly) HUCameraUpgradeOfferBannerItem *cameraUpgradeOfferBannerItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HUHomeHubMigrationBannerItem *homeHubMigrationBannerItem;
@property (nonatomic, readonly) HUMultiUserTokenFixBannerItem *multiUserTokenFixBannerItem;
@property (nonatomic, readonly) HUSetupBannerItem *setupBannerItem;

+ (id)_bannerItemClasses;
+ (id /* block */)bannerItemComparator;
+ (id)sortOrderForBannerItemCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)cameraUpgradeOfferBannerItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)homeHubMigrationBannerItem;
- (id)initWithHome:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)multiUserTokenFixBannerItem;
- (id)setupBannerItem;

@end
