
@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool hasProvisionalAuthorization;
@property (nonatomic) bool isAppClip;
@property (nonatomic) bool isDeliveredQuietly;
@property (nonatomic) <NCNotificationMuteAssertion> *muteAssertion;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSDictionary *settings;
@property (nonatomic, retain) UIImage *settingsIcon;
@property (nonatomic) bool showsCustomSettingsLink;
@property (nonatomic, copy) NSString *subSectionIdentifier;
@property (nonatomic, copy) NSSet *subSectionSettings;
@property (getter=isUserConfigurable, nonatomic) bool userConfigurable;

- (void)setDisplayName:(id)arg1;
- (void)setHasProvisionalAuthorization:(bool)arg1;
- (void)setIsAppClip:(bool)arg1;
- (void)setIsDeliveredQuietly:(bool)arg1;
- (void)setMuteAssertion:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsIcon:(id)arg1;
- (void)setShowsCustomSettingsLink:(bool)arg1;
- (void)setSubSectionIdentifier:(id)arg1;
- (void)setSubSectionSettings:(id)arg1;
- (void)setUserConfigurable:(bool)arg1;

@end
