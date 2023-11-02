
@interface HFAnalyticsAnnounceUserSettingEvent : HFAnalyticsEvent {
    NSNumber * _announceEnabledForUser;
    NSNumber * _announceSettingChangeFailed;
    NSString * _processName;
    NSNumber * _settingChangedByAdmin;
    NSNumber * _settingChangedByOwner;
    NSNumber * _settingChangedDuringOnboarding;
    NSNumber * _settingChangedForAdminUser;
    NSNumber * _settingChangedForCurrentUser;
    NSNumber * _settingChangedFromHomePodSettings;
    NSNumber * _settingChangedFromUserSettings;
}

@property (nonatomic, retain) NSNumber *announceEnabledForUser;
@property (nonatomic, retain) NSNumber *announceSettingChangeFailed;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSNumber *settingChangedByAdmin;
@property (nonatomic, retain) NSNumber *settingChangedByOwner;
@property (nonatomic, retain) NSNumber *settingChangedDuringOnboarding;
@property (nonatomic, retain) NSNumber *settingChangedForAdminUser;
@property (nonatomic, retain) NSNumber *settingChangedForCurrentUser;
@property (nonatomic, retain) NSNumber *settingChangedFromHomePodSettings;
@property (nonatomic, retain) NSNumber *settingChangedFromUserSettings;

- (void).cxx_destruct;
- (id)announceEnabledForUser;
- (id)announceSettingChangeFailed;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)processName;
- (void)setAnnounceEnabledForUser:(id)arg1;
- (void)setAnnounceSettingChangeFailed:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSettingChangedByAdmin:(id)arg1;
- (void)setSettingChangedByOwner:(id)arg1;
- (void)setSettingChangedDuringOnboarding:(id)arg1;
- (void)setSettingChangedForAdminUser:(id)arg1;
- (void)setSettingChangedForCurrentUser:(id)arg1;
- (void)setSettingChangedFromHomePodSettings:(id)arg1;
- (void)setSettingChangedFromUserSettings:(id)arg1;
- (id)settingChangedByAdmin;
- (id)settingChangedByOwner;
- (id)settingChangedDuringOnboarding;
- (id)settingChangedForAdminUser;
- (id)settingChangedForCurrentUser;
- (id)settingChangedFromHomePodSettings;
- (id)settingChangedFromUserSettings;

@end
