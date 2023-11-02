
@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction {
    NSArray * _conversationIDs;
    long long  _conversationNotificationLevel;
}

@property (nonatomic, copy) NSArray *conversationIDs;
@property (nonatomic, readonly) long long conversationNotificationLevel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIDs;
- (long long)conversationNotificationLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIDs:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 conversationNotificationLevel:(long long)arg4;
- (void)setConversationIDs:(id)arg1;
- (long long)signpostType;

@end
