
@interface HFHomePodAlarmItemProvider : HFItemProvider {
    NSMutableDictionary * _alarmIDToItemMap;
    NSMutableSet * _alarmItems;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HFAccessorySettingMobileTimerAdapter * _mobileTimerAdapter;
}

@property (nonatomic, readonly) NSMutableDictionary *alarmIDToItemMap;
@property (nonatomic, readonly) NSMutableSet *alarmItems;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;

- (void).cxx_destruct;
- (id)alarmIDToItemMap;
- (id)alarmItems;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)items;
- (id)mediaProfileContainer;
- (id)mobileTimerAdapter;
- (id)reloadItems;

@end
