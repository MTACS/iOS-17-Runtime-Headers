
@interface UNNotification : NSObject <AFOpportuneSpeakable, NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSArray * _intentIdentifiers;
    UNNotificationRequest * _request;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSArray *intentIdentifiers;
@property (nonatomic, readonly, copy) UNNotificationRequest *request;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly) long long wd_domain;
@property (nonatomic, readonly, copy) NSURL *wd_url;
@property (nonatomic, readonly, copy) NSDictionary *wd_userInfo;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;
+ (id)notificationWithRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)request;
- (id)sourceIdentifier;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)speakableContent;
- (id)speakableDate;
- (id)speakableDescription;
- (id)speakableIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (long long)wd_domain;
- (id)wd_url;
- (id)wd_userInfo;

// Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation

+ (id)notificationWithRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsTranslation.framework/UserNotificationsTranslation

+ (id)notificationForBulletin:(id)arg1;

@end
