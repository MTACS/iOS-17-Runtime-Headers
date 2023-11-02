
@interface HUBannerItemModuleController : HUItemModuleController <HFUserObserver, HUBannerViewDelegate, PRXFlowDelegate> {
    <HUBannerItemModuleControllerDelegate> * _delegate;
    NAFuture * _homeMediaAccountFuture;
    HUGridLayoutOptions * _layoutOptions;
    AMSUIUpdateMultiUserTokenTask * _multiUserTokenFixTask;
    UINavigationController * _proxCardNavigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUBannerItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *homeMediaAccountFuture;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask;
@property (nonatomic, retain) UINavigationController *proxCardNavigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultCellLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_sendBannerInteractionforItem:(id)arg1 tappedBannerItemOverrideClassName:(id)arg2;
- (void)bannerView:(id)arg1 dismissButtonTapped:(id)arg2;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)dismissCameraUpgradeBanner;
- (void)fetchMediaAccountForHome:(id)arg1;
- (bool)hasTapActionForItem:(id)arg1;
- (id)homeMediaAccountFuture;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2 delegate:(id)arg3;
- (id)layoutOptions;
- (id)multiUserTokenFixTask;
- (id)proxCardNavigationController;
- (void)setDelegate:(id)arg1;
- (void)setHomeMediaAccountFuture:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setMultiUserTokenFixTask:(id)arg1;
- (void)setProxCardNavigationController:(id)arg1;
- (void)upgradeCameraSelected;
- (void)user:(id)arg1 didUpdateNeedsiTunesMultiUserRepair:(bool)arg2;

@end
