
@interface SKIPhoneInvocation : NSObject

+ (id)announceDropInCallForType:(long long)arg1;
+ (id)announceGroupFaceTimeInviteNotification:(id)arg1 synchronousBurstIndex:(id)arg2 isSameTypeAsLastAnnouncement:(bool)arg3 appBundleIdOfLastAnnouncement:(id)arg4 timeSinceLastAnnouncement:(double)arg5;
+ (id)announceGroupFaceTimeRequestForAnnounceDirectInvocationPayload:(id)arg1;
+ (id)announceHomeAnnouncementRequestFromApp:(id)arg1 withAnnouncementIdentifier:(id)arg2 withUserNotificationType:(long long)arg3 synchronousBurstIndex:(id)arg4;
+ (id)announceIncomingCallNotificationRequest:(id)arg1;
+ (id)announceIncomingCallerRequestForCallUUID:(id)arg1 callProviderIdentifier:(id)arg2 callProviderBundleId:(id)arg3 callerContactIdentifiers:(id)arg4 handle:(id)arg5 isVideo:(bool)arg6 isCallerIDBlocked:(bool)arg7;
+ (id)announceVoicemailRequestForAnnounceDirectInvocationPayload:(id)arg1;
+ (id)readHomeAnnouncementRequestFromApp:(id)arg1;
+ (id)startPhoneCallRequestFromApp:(id)arg1;

@end
