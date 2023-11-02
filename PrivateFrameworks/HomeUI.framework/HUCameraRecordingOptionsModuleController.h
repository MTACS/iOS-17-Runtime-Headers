
@interface HUCameraRecordingOptionsModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)alertMessageForEventType:(unsigned long long)arg1;
- (id)alertTitleForEventType:(unsigned long long)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)displayAlertForItem:(id)arg1;
- (bool)hasNotificationSettingForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (bool)isItemHeader:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
