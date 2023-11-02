
@interface HUDoorbellChimeDevicesItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)enableDoorbellChime:(bool)arg1 forItem:(id)arg2;
- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;

@end
