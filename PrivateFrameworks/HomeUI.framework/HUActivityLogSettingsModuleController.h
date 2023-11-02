
@interface HUActivityLogSettingsModuleController : HUItemModuleController {
    void activityLogItemModule;
    void durationFormatter;
}

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end
