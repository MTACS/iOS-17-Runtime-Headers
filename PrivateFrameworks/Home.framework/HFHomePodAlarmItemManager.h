
@interface HFHomePodAlarmItemManager : HFItemManager {
    HFHomePodAlarmItemModule * _alarmItemModule;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) HFHomePodAlarmItemModule *alarmItemModule;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)alarmItemModule;
- (id)initWithDelegate:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)mediaProfileContainer;

@end
