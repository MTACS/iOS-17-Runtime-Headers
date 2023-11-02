
@interface HUBannerItemModule : HFItemModule <HFItemHiding, HUDropInBannerItemProviderDelegate> {
    HUBannerItemProvider * _bannerItemProvider;
    HUDashboardContext * _context;
    HUDropInBannerItemProvider * _dropInBannerItemProvider;
    bool  _forceShowBanners;
    NSSet * _hiddenBanners;
    HFTransformItemProvider * _statusBannerItemProvider;
}

@property (nonatomic, retain) HUBannerItemProvider *bannerItemProvider;
@property (nonatomic, readonly) HUDashboardContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUDropInBannerItemProvider *dropInBannerItemProvider;
@property (nonatomic) bool forceShowBanners;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *hiddenBanners;
@property (nonatomic, retain) HFTransformItemProvider *statusBannerItemProvider;
@property (readonly) Class superclass;

+ (Class)_statusBannerItemClassForStatusItemClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (id)bannerItemProvider;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)context;
- (void)didUpdateDropInAvailability:(id)arg1;
- (id)dropInBannerItemProvider;
- (bool)forceShowBanners;
- (id)hiddenBanners;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (void)setBannerItemProvider:(id)arg1;
- (void)setDropInBannerItemProvider:(id)arg1;
- (void)setForceShowBanners:(bool)arg1;
- (void)setHiddenBanners:(id)arg1;
- (void)setStatusBannerItemProvider:(id)arg1;
- (id)statusBannerItemProvider;

@end
