
@interface HUSafetyAndSecuritySettingsItemModuleController : HUItemModuleController <HFHomeManagerObserver, HUBannerViewDelegate, HUUserSwitchCellDelegate> {
    <HUSafetyAndSecuritySettingsModuleControllerDelegate> * _delegate;
    HUGridLayoutOptions * _layoutOptions;
    HUBannerView * _softwareUpdateBannerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSafetyAndSecuritySettingsModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) HUBannerView *softwareUpdateBannerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bannerView:(id)arg1 footerViewTapped:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateHH2State:(bool)arg2;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)layoutOptions;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setSoftwareUpdateBannerView:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)softwareUpdateBannerView;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (void)userSwitchCell:(id)arg1 didTurnOn:(bool)arg2;

@end
