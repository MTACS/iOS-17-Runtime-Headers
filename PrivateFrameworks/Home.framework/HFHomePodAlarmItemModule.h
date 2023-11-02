
@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver> {
    NSSet * _itemProviders;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)itemProviders;
- (id)mediaProfileContainer;
- (void)mobileTimerAdapter:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)mobileTimerAdapterForAlarmItem:(id)arg1;
- (id)mobileTimerAdapterForMediaProfile:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;

@end
