
@interface IMCommLimitsPolicyCache : NSObject {
    NSMutableDictionary * _chatIdentifierToParticipantIDsHash;
    NSMutableDictionary * _conversationContextToParticipantIDsHash;
    NSMutableDictionary * _participantIDsHashToChatIdentifier;
    NSMutableDictionary * _participantIDsHashToConversationContext;
}

@property (nonatomic, retain) NSMutableDictionary *chatIdentifierToParticipantIDsHash;
@property (nonatomic, retain) NSMutableDictionary *conversationContextToParticipantIDsHash;
@property (nonatomic, retain) NSMutableDictionary *participantIDsHashToChatIdentifier;
@property (nonatomic, retain) NSMutableDictionary *participantIDsHashToConversationContext;

- (void).cxx_destruct;
- (void)addSentinelContextForParticipantIDsHash:(id)arg1;
- (void)addTrackingForChat:(id)arg1 participantIDsHash:(id)arg2;
- (void)addTrackingForConversationContext:(id)arg1 forParticipantIDsHash:(id)arg2;
- (id)chatForConversationContext:(id)arg1;
- (id)chatForParticipantIDsHash:(id)arg1;
- (id)chatIdentifierToParticipantIDsHash;
- (id)contextForParticipantIDsHash:(id)arg1;
- (id)conversationContextForChat:(id)arg1;
- (id)conversationContextToParticipantIDsHash;
- (id)init;
- (bool)isFetchingCommLimitsPolicyForChat:(id)arg1;
- (id)participantIDsHashToChatIdentifier;
- (id)participantIDsHashToConversationContext;
- (void)removeTrackingForChat:(id)arg1;
- (void)setChatIdentifierToParticipantIDsHash:(id)arg1;
- (void)setConversationContextToParticipantIDsHash:(id)arg1;
- (void)setParticipantIDsHashToChatIdentifier:(id)arg1;
- (void)setParticipantIDsHashToConversationContext:(id)arg1;

@end
