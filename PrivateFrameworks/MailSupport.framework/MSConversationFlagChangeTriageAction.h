
@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (nonatomic, readonly) EMMessage *referenceMessage;

+ (long long)conversationNotificationLevel;

- (id)_changeAction;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (id)initWithReferenceMessage:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 reason:(long long)arg5;
- (id)messageFlags;
- (id)referenceMessage;

@end
