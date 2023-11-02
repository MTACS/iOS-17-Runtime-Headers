
@protocol HMSettingsOwner

@required

- (<HMSettingsDelegate> *)delegate;
- (HMSettingGroup *)rootGroup;
- (void)setDelegate:(id <HMSettingsDelegate>)arg1;

@end
