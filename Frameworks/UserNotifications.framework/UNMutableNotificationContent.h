
@interface UNMutableNotificationContent : UNNotificationContent

@property (nonatomic, copy) NSString *accessoryImageName;
@property (nonatomic, copy) NSArray *activeParticipantHandles;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) _UNNotificationCommunicationContext *communicationContext;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *defaultActionBundleIdentifier;
@property (nonatomic, copy) NSString *defaultActionTitle;
@property (nonatomic, copy) NSURL *defaultActionURL;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *filterCriteria;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic) bool hasDefaultAction;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) UNNotificationIcon *icon;
@property (nonatomic) unsigned long long interruptionLevel;
@property (nonatomic, copy) NSString *launchImageName;
@property (nonatomic, copy) NSString *notificationProviderIdentifier;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) double relevanceScore;
@property (nonatomic, copy) NSArray *remoteParticipantHandles;
@property (nonatomic) bool screenCaptureProhibited;
@property (nonatomic) bool shouldAuthenticateDefaultAction;
@property (nonatomic) bool shouldBackgroundDefaultAction;
@property (nonatomic) bool shouldDisplayActionsInline;
@property (nonatomic) bool shouldHideDate;
@property (nonatomic) bool shouldHideTime;
@property (nonatomic) bool shouldIgnoreDoNotDisturb;
@property (nonatomic) bool shouldIgnoreDowntime;
@property (nonatomic) bool shouldPreemptPresentedNotification;
@property (nonatomic) bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) bool shouldShowSubordinateIcon;
@property (nonatomic) bool shouldSuppressDefaultAction;
@property (nonatomic) bool shouldSuppressScreenLightUp;
@property (nonatomic) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic) bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic, copy) UNNotificationSound *sound;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic, copy) NSString *targetContentIdentifier;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSSet *topicIdentifiers;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccessoryImageName:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setCommunicationContext:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDefaultActionBundleIdentifier:(id)arg1;
- (void)setDefaultActionTitle:(id)arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFilterCriteria:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHasDefaultAction:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInterruptionLevel:(unsigned long long)arg1;
- (void)setLaunchImageName:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setShouldAuthenticateDefaultAction:(bool)arg1;
- (void)setShouldBackgroundDefaultAction:(bool)arg1;
- (void)setShouldDisplayActionsInline:(bool)arg1;
- (void)setShouldHideDate:(bool)arg1;
- (void)setShouldHideTime:(bool)arg1;
- (void)setShouldIgnoreDoNotDisturb:(bool)arg1;
- (void)setShouldIgnoreDowntime:(bool)arg1;
- (void)setShouldPreemptPresentedNotification:(bool)arg1;
- (void)setShouldPreventNotificationDismissalAfterDefaultAction:(bool)arg1;
- (void)setShouldShowSubordinateIcon:(bool)arg1;
- (void)setShouldSuppressDefaultAction:(bool)arg1;
- (void)setShouldSuppressScreenLightUp:(bool)arg1;
- (void)setShouldSuppressSyncDismissalWhenRemoved:(bool)arg1;
- (void)setShouldUseRequestIdentifierForDismissalSync:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryArgument:(id)arg1;
- (void)setSummaryArgumentCount:(unsigned long long)arg1;
- (void)setTargetContentIdentifier:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicIdentifiers:(id)arg1;
- (void)setUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts

- (id)ea_bundleForBundleIdentifier:(id)arg1;
- (id)ea_defaultTitle;
- (id)ea_externalToneFileURLForTone:(id)arg1 inBundle:(id)arg2;
- (id)ea_externalVibrationPatternFileURLForVibration:(id)arg1 inBundle:(id)arg2;
- (id)ea_getUpdatedBodyString:(id)arg1 withMessageDictionary:(id)arg2;
- (void)ea_setAlertCategory:(id)arg1;
- (void)ea_setPropertiesForCellBroadcastMessage:(id)arg1 withActivePhoneCall:(bool)arg2;
- (id)ea_timestampSubtitleForDate:(id)arg1 locale:(id)arg2;
- (id)ea_timestampSubtitleForNow;
- (void)ea_updateAlertCategory:(id)arg1;
- (void)ea_updateUserInfo:(id)arg1 withMessageDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FaceTimeMessageStore.framework/FaceTimeMessageStore

- (id)activeParticipantHandles;
- (id)notificationProviderIdentifier;
- (id)remoteParticipantHandles;
- (void)setActiveParticipantHandles:(id)arg1;
- (void)setNotificationProviderIdentifier:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)_hkmc_contentWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4 fertileWindowEndDayIndex:(long long)arg5 daysShiftedFromCalendarMethod:(id)arg6;

// Image: /System/Library/PrivateFrameworks/HealthMobility.framework/HealthMobility

+ (id)_hkmobility_contentWithCategory:(id)arg1 expirationDate:(id)arg2;
+ (id)_makeUserInfoForCategory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (void)argon_setArtworkUsed:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

+ (id)hdsp_notificationContentWithEnvironment:(id)arg1;

@end
