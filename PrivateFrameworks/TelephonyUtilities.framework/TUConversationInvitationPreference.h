
@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding> {
    long long  _handleType;
    long long  _notificationStyles;
}

@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly) long long notificationStyles;

+ (id)incomingCallAndNotificationInvitationPreferences;
+ (id)incomingCallInvitationPreferences;
+ (id)invitationPreferencesForAllHandlesWithStyles:(long long)arg1;
+ (id)letMeInResponseInvitationPreferences;
+ (id)noNotificationInvitationPreferences;
+ (id)standardInvitationPreferencesForLink;
+ (bool)supportsSecureCoding;
+ (long long)validateNotificationStyles:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)handleType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandleType:(long long)arg1 notificationStyles:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInvitationPreference:(id)arg1;
- (long long)notificationStyles;

@end
