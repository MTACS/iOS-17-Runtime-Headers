
@interface SUUISettingsGroupController : NSObject {
    <SUUISettingsGroupControllerDelegate> * _delegate;
    NSMutableArray * _settingDescriptions;
    SUUISettingsGroupDescription * _settingsGroupDescription;
}

@property (nonatomic) <SUUISettingsGroupControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *settingDescriptions;
@property (nonatomic, retain) SUUISettingsGroupDescription *settingsGroupDescription;

- (void).cxx_destruct;
- (void)_reloadSettingDescription:(id)arg1;
- (id)_viewForSettingDescription:(id)arg1;
- (void)attachSettingDescription:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSettingDescriptions:(id)arg1;
- (void)setSettingsGroupDescription:(id)arg1;
- (id)settingDescriptions;
- (id)settingsGroupDescription;

@end
