
@interface NSNotification : NSObject <NSCoding, NSCopying>

@property (nonatomic, readonly) bool _sf_perSitePreferenceNotificationWasSentFromAnotherProcess;
@property (readonly, copy) NSString *name;
@property (readonly, retain) id object;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;
+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)object;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)cal_changeMayAffectAnyObjectOfType:(long long)arg1;
- (bool)cal_changeMayAffectCalendarsOrSources;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_sf_perSitePreferenceNotificationWasSentFromAnotherProcess;

// Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence

- (id)_avtui_changedRecordIdentifiers;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)ClinicalAccountOnboardingCompletionNotification;
+ (id)OAuthCompletionNotification;
+ (id)SignedClinicalDataAddedToWalletNotification;
+ (id)WDMedicalRecordTimelineShouldReloadNotification;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)playerPath;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

+ (id)FTMSVoicemailManager_ObjCVoicemailsChangedNotification;

@end
