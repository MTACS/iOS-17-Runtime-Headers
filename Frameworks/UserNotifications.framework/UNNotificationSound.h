
@interface UNNotificationSound : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alertTopic;
    long long  _alertType;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    bool  _critical;
    double  _maximumDuration;
    bool  _shouldIgnoreAccessibilityDisabledVibrationSetting;
    bool  _shouldIgnoreRingerSwitch;
    bool  _shouldRepeat;
    NSString * _toneFileName;
    NSURL * _toneFileURL;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    NSString * _vibrationIdentifier;
    NSURL * _vibrationPatternFileURL;
}

@property (nonatomic, readonly, copy) NSString *alertTopic;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSNumber *audioVolume;
@property (getter=isCritical, nonatomic, readonly) bool critical;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) bool shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (nonatomic, readonly) bool shouldIgnoreRingerSwitch;
@property (nonatomic, readonly) bool shouldRepeat;
@property (nonatomic, readonly, copy) NSString *toneFileName;
@property (nonatomic, readonly, copy) NSURL *toneFileURL;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;
@property (nonatomic, readonly, copy) NSURL *vibrationPatternFileURL;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(bool)arg3 toneFileName:(id)arg4;
+ (id)criticalSoundNamed:(id)arg1;
+ (id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2;
+ (id)defaultCriticalSound;
+ (id)defaultCriticalSoundWithAudioVolume:(float)arg1;
+ (id)defaultRingtoneSound;
+ (id)defaultSound;
+ (id)defaultSystemSound;
+ (id)ringtoneSoundNamed:(id)arg1;
+ (id)soundNamed:(id)arg1;
+ (id)soundWithAlertType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(bool)arg5 maximumDuration:(double)arg6 shouldIgnoreAccessibilityDisabledVibrationSetting:(bool)arg7 shouldIgnoreRingerSwitch:(bool)arg8 shouldRepeat:(bool)arg9 toneFileName:(id)arg10 toneFileURL:(id)arg11 toneIdentifier:(id)arg12 toneMediaLibraryItemIdentifier:(unsigned long long)arg13 vibrationIdentifier:(id)arg14 vibrationPatternFileURL:(id)arg15;
- (id)alertTopic;
- (long long)alertType;
- (id)audioCategory;
- (id)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCritical;
- (bool)isEqual:(id)arg1;
- (double)maximumDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldIgnoreAccessibilityDisabledVibrationSetting;
- (bool)shouldIgnoreRingerSwitch;
- (bool)shouldRepeat;
- (id)toneFileName;
- (id)toneFileURL;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPatternFileURL;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)mtSound;
- (id)mt_Description;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

+ (id)hdsp_bedtimeReminderSound;
+ (id)hdsp_chargingReminderSound;
+ (id)hdsp_wakeDetectionSound;
+ (id)hdsp_wakeUpResultsSound;

@end
