
@interface CKConversationListScrollingController : NSObject {
    IMChatRegistry * _chatRegistry;
    CKConversationList * _conversationList;
    bool  _fetchingOlderConversations;
    NSMutableDictionary * _filterModeToEarliestFetchedDate;
    NSMutableDictionary * _filterModeToEarliestReachedDate;
}

@property (nonatomic, readonly) IMChatRegistry *chatRegistry;
@property (nonatomic, readonly) CKConversationList *conversationList;
@property (getter=isFetchingOlderConversations, nonatomic) bool fetchingOlderConversations;
@property (nonatomic, retain) NSMutableDictionary *filterModeToEarliestFetchedDate;
@property (nonatomic, retain) NSMutableDictionary *filterModeToEarliestReachedDate;

- (void).cxx_destruct;
- (id)_chatPredicateForFilterMode:(unsigned long long)arg1;
- (id)_convertFilterActionDictionaryToConversationListFilterModeDictionary:(id)arg1;
- (void)_handleRegistryDidLoadNotification:(id)arg1;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)arg1;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)arg1 limit:(unsigned long long)arg2 iteration:(unsigned long long)arg3;
- (void)_resetDateTrackingWithChatRegistry:(id)arg1;
- (id)chatRegistry;
- (id)conversationList;
- (id)filterModeToEarliestFetchedDate;
- (id)filterModeToEarliestReachedDate;
- (id)initWithConversationList:(id)arg1 chatRegistry:(id)arg2;
- (bool)isFetchingOlderConversations;
- (void)reachedConversationWithLastMessageDate:(id)arg1 filterMode:(unsigned long long)arg2 remainingRows:(long long)arg3;
- (void)setFetchingOlderConversations:(bool)arg1;
- (void)setFilterModeToEarliestFetchedDate:(id)arg1;
- (void)setFilterModeToEarliestReachedDate:(id)arg1;

@end
