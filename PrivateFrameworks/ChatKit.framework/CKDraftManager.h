
@interface CKDraftManager : NSObject {
    NSMutableDictionary * _cachedDrafts;
    NSMutableSet * _dirtyDraftIDs;
    NSArray * _pendingRecipients;
}

@property (nonatomic, retain) NSMutableDictionary *cachedDrafts;
@property (nonatomic, retain) NSMutableSet *dirtyDraftIDs;
@property (nonatomic, retain) NSArray *pendingRecipients;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearDraftForConversation:(id)arg1;
- (id)_draftForKey:(id)arg1;
- (id)_pendingRecipients;
- (id)_pendingRecipientsURL;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (void)_setPendingRecipients:(id)arg1;
- (id)cachedDrafts;
- (void)clearDraftForComposition:(id)arg1;
- (void)clearDraftForPendingConversation;
- (void)dealloc;
- (id)dirtyDraftIDs;
- (id)draftForConversation:(id)arg1;
- (id)draftForPendingConversationWithRecipients:(id*)arg1;
- (void)flushCache;
- (id)pendingRecipients;
- (void)saveCompositionAndFlushCache:(bool)arg1;
- (void)setCachedDrafts:(id)arg1;
- (void)setDirtyDraftIDs:(id)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;
- (void)setPendingRecipients:(id)arg1;

@end
