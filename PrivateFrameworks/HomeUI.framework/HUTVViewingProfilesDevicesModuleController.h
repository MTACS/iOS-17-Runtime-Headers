
@interface HUTVViewingProfilesDevicesModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUTVViewingProfilesDevicesItemModule *module;
@property (readonly) Class superclass;

- (void)_toggleShowTVViewingProfileForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;

@end
