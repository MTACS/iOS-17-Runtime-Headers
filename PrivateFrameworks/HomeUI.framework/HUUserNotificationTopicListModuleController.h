
@interface HUUserNotificationTopicListModuleController : HUItemModuleController {
    HFPinCodeManager * _pinCodeManager;
}

@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)pinCodeManager;
- (id)presentNotificationSettingsForTopic:(id)arg1 animated:(bool)arg2;
- (void)setPinCodeManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(bool)arg2;

@end
