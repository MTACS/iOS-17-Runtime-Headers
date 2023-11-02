
@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool alwaysAllowDefaultAction;
@property (nonatomic, readonly) bool alwaysAllowLongLookGesture;
@property (nonatomic, readonly) bool alwaysSpeakNotifications;
@property (nonatomic, retain) NSArray *displayIDsWithBadgingEnabled;
@property (nonatomic, readonly) bool dontSuppressForPrivacyWhenUnlocked;
@property (nonatomic, readonly) NSArray *legacyAlarmList;
@property (nonatomic, readonly) bool shouldTestBannerPlayTextTone;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;

@end
