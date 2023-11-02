
@interface IMDAvailabilityAutoReplier : NSObject <IMDAutoReplying> {
    CARAutomaticDNDStatus * _automaticDNDStatus;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    <IMDAutoReplyDelegate> * _replyDelegate;
}

@property (nonatomic, retain) CARAutomaticDNDStatus *automaticDNDStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) <IMDAutoReplyDelegate> *replyDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2;
- (unsigned long long)_autoReplyAudience;
- (id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(bool)arg1;
- (bool)_chatEligibleForAvailabilityInformation:(id)arg1;
- (bool)_contactsContainsParticipants:(id)arg1;
- (id)_customizedAutoReplyMessage;
- (bool)_deviceIsPhone;
- (bool)_deviceSupportsSMSAutoReplyForChat:(id)arg1;
- (bool)_deviceSupportsiMessageAutoReply;
- (id)_dndHandleForIMDHandle:(id)arg1;
- (bool)_favoritesContainsParticipants:(id)arg1;
- (bool)_hasRecentOutgoingMessagesInChat:(id)arg1;
- (bool)_haveRecentUrgentMessageInGracePeriodForChat:(id)arg1;
- (bool)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)arg1;
- (bool)_isInDrivingFocus;
- (bool)_isSMSChat:(id)arg1;
- (bool)_localDeviceHasSIMMatchingChat:(id)arg1;
- (id)_messageGuidsForMessages:(id)arg1;
- (bool)_messageHasLegacyUrgentTriggerMatchInText:(id)arg1;
- (bool)_messageIsSOS:(id)arg1;
- (bool)_messageItemSupportsAvailabilityReply:(id)arg1;
- (bool)_messageItemSupportsBreakthroughNotification:(id)arg1;
- (id)_messageItemsSupportingAvailabilityReplyFromItems:(id)arg1;
- (id)_messageItemsSupportingBreakthroughNotifications:(id)arg1;
- (bool)_messageSenderEligibleToReceiveAvailabilityInformation:(id)arg1;
- (void)_processMessagesForAvailabilityAutoReply:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;
- (void)_sendDeliveredQuietelyForMessages:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;
- (void)_sendTextAutoReplyIfNecessaryForMessages:(id)arg1 withUrgentBreakthroughInstructions:(bool)arg2 inChat:(id)arg3;
- (void)_sendTextAutoReplyToChat:(id)arg1 withUrgentBreakthroughInstructions:(bool)arg2;
- (bool)_shouldIgnoreDoNotDisturbForMessages:(id)arg1 inChat:(id)arg2;
- (bool)_shouldSendTextAutoReplyForChat:(id)arg1;
- (bool)_sosTransportValidForMessage:(id)arg1;
- (bool)_sosURLMatchInText:(id)arg1;
- (id)_stringForAutoReplyAudience:(unsigned long long)arg1;
- (bool)_userIsAvailableToHandle:(id)arg1;
- (id)automaticDNDStatus;
- (id)init;
- (void)iterateRecentMessagesInChat:(id)arg1 withBlock:(id /* block */)arg2;
- (id)privateWorkQueue;
- (void)processMessages:(id)arg1 inChat:(id)arg2 fromIDSID:(id)arg3;
- (id)replyDelegate;
- (void)setAutomaticDNDStatus:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setReplyDelegate:(id)arg1;

@end
