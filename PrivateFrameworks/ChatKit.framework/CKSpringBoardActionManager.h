
@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {
    CKContactsSearchManager * _contactsSearchManager;
    NSArray * _conversationCache;
    bool  shouldHideGroupsDonations;
}

@property (nonatomic, retain) CKContactsSearchManager *contactsSearchManager;
@property (nonatomic, copy) NSArray *conversationCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldHideGroupsDonations;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_refreshConversationCache;
- (void)chatStateChanged:(id)arg1;
- (id)contactsSearchManager;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)conversationCache;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setContactsSearchManager:(id)arg1;
- (void)setConversationCache:(id)arg1;
- (void)setShouldHideGroupsDonations:(bool)arg1;
- (id)shortcutItemForConversation:(id)arg1;
- (bool)shouldHideGroupsDonations;
- (void)updateShortcutItems;

@end
