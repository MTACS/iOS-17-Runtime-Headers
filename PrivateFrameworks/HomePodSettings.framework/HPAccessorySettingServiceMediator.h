
@interface HPAccessorySettingServiceMediator : NSObject <HPAccessorySettingListenerDelegate> {
    HPSAccessorySettingService * _settingsInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HPSAccessorySettingService *settingsInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdateHH2State:(bool)arg1;
- (id)initWithInterface:(id)arg1;
- (void)notifyDidUpdateSetting:(id)arg1 forKeyPath:(id)arg2;
- (id)settingsInterface;

@end
