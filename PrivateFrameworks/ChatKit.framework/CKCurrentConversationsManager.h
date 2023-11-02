
@interface CKCurrentConversationsManager : NSObject {
    NSCountedSet * _currentConversations;
    NSMutableDictionary * _idToNodeDictionary;
    IMDoubleLinkedList * _orderedKeys;
}

@property (nonatomic, readonly) unsigned long long cacheSize;
@property (nonatomic, retain) NSCountedSet *currentConversations;
@property (nonatomic, retain) NSMutableDictionary *idToNodeDictionary;
@property (nonatomic, retain) IMDoubleLinkedList *orderedKeys;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canDumpConversationFromCache:(id)arg1;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (void)addConversation:(id)arg1;
- (unsigned long long)cacheSize;
- (id)currentConversations;
- (id)idToNodeDictionary;
- (void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(bool)arg2;
- (id)orderedKeys;
- (void)pruneCache;
- (void)pruneCacheToSize:(unsigned long long)arg1;
- (void)purgeConversation:(id)arg1;
- (void)purgeConversations:(id)arg1;
- (void)removeConversation:(id)arg1;
- (void)setCurrentConversations:(id)arg1;
- (void)setIdToNodeDictionary:(id)arg1;
- (void)setOrderedKeys:(id)arg1;

@end
