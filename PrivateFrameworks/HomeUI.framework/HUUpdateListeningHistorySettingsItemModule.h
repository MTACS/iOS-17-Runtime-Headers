
@interface HUUpdateListeningHistorySettingsItemModule : HFItemModule {
    HMHome * _home;
    HFItemProvider * _mediaDeviceItemProvider;
    HFItemProvider * _otherDeviceItemProvider;
    HMUser * _user;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFItemProvider *mediaDeviceItemProvider;
@property (nonatomic, retain) HFItemProvider *otherDeviceItemProvider;
@property (nonatomic, readonly) HMUser *user;

+ (id /* block */)_ulhDeviceItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 user:(id)arg3;
- (id)itemProviders;
- (id)mediaDeviceItemProvider;
- (id)otherDeviceItemProvider;
- (void)setMediaDeviceItemProvider:(id)arg1;
- (void)setOtherDeviceItemProvider:(id)arg1;
- (id)setUpdateListeningHistorySetting:(bool)arg1 forItem:(id)arg2;
- (id)user;

@end
