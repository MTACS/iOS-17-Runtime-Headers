
@interface GameCenterUI.GKSuggestedPlayerGroup : NSObject {
    void conversationIdentifier;
    void groupName;
    void messagesGroupIdentifier;
    void players;
    void source;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) bool fromPeopleSuggester;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, readonly) bool isNearby;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic, copy) NSArray *players;
@property (nonatomic) long long source;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (bool)fromPeopleSuggester;
- (id)groupName;
- (id)init;
- (bool)isNearby;
- (id)messagesGroupIdentifier;
- (id)players;
- (void)setConversationIdentifier:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setMessagesGroupIdentifier:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
