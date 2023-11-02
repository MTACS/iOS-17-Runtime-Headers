
@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _displayName;
    bool  _hasProvisialAuthorization;
    bool  _isAppClip;
    bool  _isDeliveredQuietly;
    <NCNotificationMuteAssertion> * _muteAssertion;
    NSString * _sectionIdentifier;
    NSDictionary * _settings;
    UIImage * _settingsIcon;
    bool  _showsCustomSettingsLink;
    NSString * _subSectionIdentifier;
    NSSet * _subSectionSettings;
    bool  _userConfigurable;
}

@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (nonatomic, readonly) bool criticalAlertsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirectMessagesEnabled, nonatomic, readonly) bool directMessagesEnabled;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) unsigned long long groupingSetting;
@property (nonatomic, readonly) bool hasProvisionalAuthorization;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppClip;
@property (nonatomic, readonly) bool isDeliveredQuietly;
@property (nonatomic, readonly) <NCNotificationMuteAssertion> *muteAssertion;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (getter=isScheduledDeliveryEnabled, nonatomic, readonly) bool scheduledDeliveryEnabled;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *settings;
@property (nonatomic, readonly) UIImage *settingsIcon;
@property (nonatomic, readonly) bool showsCustomSettingsLink;
@property (nonatomic, readonly) bool showsInLockScreen;
@property (nonatomic, readonly) bool showsInNotificationCenter;
@property (nonatomic, readonly, copy) NSString *subSectionIdentifier;
@property (nonatomic, readonly) long long subSectionPriority;
@property (nonatomic, readonly, copy) NSSet *subSectionSettings;
@property (readonly) Class superclass;
@property (getter=isTimeSensitiveEnabled, nonatomic, readonly) bool timeSensitiveEnabled;
@property (getter=isUserConfigurable, nonatomic, readonly) bool userConfigurable;
@property (getter=hasUserConfiguredDirectMessagesSetting, nonatomic, readonly) bool userConfiguredDirectMessagesSetting;
@property (getter=hasUserConfiguredTimeSensitiveSetting, nonatomic, readonly) bool userConfiguredTimeSensitiveSetting;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (bool)hasProvisionalAuthorization;
- (unsigned long long)hash;
- (id)initWithNotificationSectionSettings:(id)arg1;
- (bool)isAppClip;
- (bool)isDeliveredQuietly;
- (bool)isEqual:(id)arg1;
- (bool)isUserConfigurable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)muteAssertion;
- (id)sectionIdentifier;
- (id)settings;
- (id)settingsIcon;
- (bool)showsCustomSettingsLink;
- (id)subSectionIdentifier;
- (id)subSectionSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;

- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;
- (unsigned long long)contentPreviewSetting;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;
- (bool)criticalAlertsEnabled;
- (unsigned long long)groupingSetting;
- (bool)hasUserConfiguredDirectMessagesSetting;
- (bool)hasUserConfiguredTimeSensitiveSetting;
- (bool)isDirectMessagesEnabled;
- (bool)isScheduledDeliveryEnabled;
- (bool)isTimeSensitiveEnabled;
- (bool)notificationsEnabled;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (long long)subSectionPriority;

@end
