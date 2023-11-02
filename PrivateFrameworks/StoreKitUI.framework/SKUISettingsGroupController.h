
@interface SKUISettingsGroupController : NSObject {
    <SKUISettingsGroupControllerDelegate> * _delegate;
    NSMutableArray * _settingDescriptions;
    SKUISettingsGroupDescription * _settingsGroupDescription;
}

@property (nonatomic) <SKUISettingsGroupControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *settingDescriptions;
@property (nonatomic, retain) SKUISettingsGroupDescription *settingsGroupDescription;

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
