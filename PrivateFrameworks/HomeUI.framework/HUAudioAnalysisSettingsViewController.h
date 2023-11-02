
@interface HUAudioAnalysisSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol> {
    HMHome * _home;
    HUAudioAnalysisSettingsItemModuleController * _moduleController;
    HFItem<HFServiceLikeItem> * _serviceItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUAudioAnalysisSettingsItemModuleController *moduleController;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *serviceItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)home;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)moduleController;
- (id)serviceItem;
- (void)setModuleController:(id)arg1;
- (void)setServiceItem:(id)arg1;

@end
