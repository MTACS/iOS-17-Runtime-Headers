
@interface ICQuickNoteSessionSettings : NSObject

+ (void)disableNotesOnLockScreenIfNecessary;
+ (bool)hasAccountSupportingLockScreen;
+ (void)initialize;
+ (long long)sessionDuration;
+ (void)setSessionDuration:(long long)arg1;
+ (void)setShowOnLockScreen:(long long)arg1;
+ (long long)showOnLockScreen;
+ (long long)showOnLockScreenSettingValue;
+ (void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;

@end
