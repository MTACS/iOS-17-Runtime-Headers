
@interface IDSMPConversationGroupSponsorPair : NSObject {
    IDSMPConversationKey * _conversationKey;
    NSString * _sponsorAlias;
}

@property (nonatomic, readonly) IDSMPConversationKey *conversationKey;
@property (nonatomic, readonly) NSString *sponsorAlias;

- (void).cxx_destruct;
- (id)conversationKey;
- (id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2;
- (id)sponsorAlias;

@end
