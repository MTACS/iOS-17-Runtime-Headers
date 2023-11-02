
@interface HUCameraSmartNotificationSettingsModuleController : HUItemModuleController <HUSwitchCellDelegate> {
    <HUCameraSmartNotificationSettingsModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCameraSmartNotificationSettingsModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldDisplayAlertForItem:(id)arg1 withSmartDetectionModule:(id)arg2 forProfile:(id)arg3;

- (void).cxx_destruct;
- (id)alertMessageForEventType:(unsigned long long)arg1;
- (id)alertTitleForEventType:(unsigned long long)arg1;
- (bool)canEnableNotificationForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)displayAlertForItemCell:(id)arg1;
- (id)initWithModule:(id)arg1;
- (bool)isItemHeader:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (void)updateNotificationSettingForItem:(id)arg1;

@end
