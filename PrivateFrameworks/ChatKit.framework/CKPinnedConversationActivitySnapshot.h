
@interface CKPinnedConversationActivitySnapshot : NSObject {
    NSArray * _activityItems;
    NSArray * _contactItems;
}

@property (nonatomic, readonly, copy) NSArray *activityItems;
@property (nonatomic, readonly, copy) NSArray *contactItems;

+ (id)emptySnapshot;

- (void).cxx_destruct;
- (long long)_contactItemAlignmentForItemAtIndex:(long long)arg1 firstItemAlignment:(long long)arg2;
- (id)_contactItemMatchingIdentifier:(id)arg1;
- (double)_contentScaleForContactItemAtIndex:(long long)arg1 withMessageContentScale:(double)arg2;
- (double)_contentScaleForMessage:(id)arg1 amongRecentMessagesInPinnedConversations:(id)arg2;
- (long long)_firstContactItemAlignmentForContactItem:(id)arg1 previousSnapshot:(id)arg2 totalNumberOfContactItemIdentifiersWithUnreadMessages:(long long)arg3;
- (id)activityItems;
- (id)contactItems;
- (id)initWithActivityItems:(id)arg1 contactItems:(id)arg2;
- (id)initWithConversation:(id)arg1 recentMessagesInPinnedConversations:(id)arg2 previousSnapshot:(id)arg3;

@end
