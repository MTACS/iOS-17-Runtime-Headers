
@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation {
    NSArray * _containerPrivacySettings;
}

@property (nonatomic, copy) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)containerPrivacySettings;
- (void)main;
- (int)operationType;
- (void)setContainerPrivacySettings:(id)arg1;
- (bool)shouldCheckAppVersion;

@end
