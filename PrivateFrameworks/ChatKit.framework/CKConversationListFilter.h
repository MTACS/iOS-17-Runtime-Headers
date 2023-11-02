
@interface CKConversationListFilter : NSObject <NSCopying, NSSecureCoding> {
    NSPredicate * _cachedConversationPredicate;
    DNDConfiguration * _focusConfiguration;
    unsigned long long  _inbox;
    bool  _unreadOnly;
}

@property (nonatomic, retain) NSPredicate *cachedConversationPredicate;
@property (nonatomic, readonly) NSPredicate *conversationPredicate;
@property (nonatomic, readonly) DNDConfiguration *focusConfiguration;
@property (nonatomic, readonly) unsigned long long inbox;
@property (nonatomic, readonly) bool unreadOnly;

+ (id)defaultFilter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_conversation:(id)arg1 matchesInbox:(unsigned long long)arg2;
- (bool)_conversation:(id)arg1 matchesSpamFilterInbox:(unsigned long long)arg2;
- (bool)_conversation:(id)arg1 matchesSpamFilterInboxGroup:(unsigned long long)arg2;
- (unsigned long long)_defaultSpamFilterInboxForCategory:(long long)arg1;
- (id)_focusConfigurationSubPredicate;
- (id)_inboxSubPredicate;
- (id)_initWithInbox:(unsigned long long)arg1 unreadOnly:(bool)arg2 focusConfiguration:(id)arg3;
- (bool)_isSpamFilteredConversation:(id)arg1;
- (unsigned long long)_spamFilterInboxForCategory:(long long)arg1 subCategory:(long long)arg2;
- (unsigned long long)_spamFilterInboxForConversation:(id)arg1;
- (unsigned long long)_spamFilterInboxForConversationListInbox:(unsigned long long)arg1;
- (unsigned long long)_spamFilterInboxGroupForConversationListInbox:(unsigned long long)arg1;
- (unsigned long long)_spamFilterInboxGroupForInbox:(unsigned long long)arg1;
- (id)_unreadOnlySubPredicate;
- (id)cachedConversationPredicate;
- (id)conversationPredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterByChangingFocusConfiguration:(id)arg1;
- (id)filterByChangingInbox:(unsigned long long)arg1;
- (id)filterByChangingUnreadOnly:(bool)arg1;
- (id)focusConfiguration;
- (unsigned long long)hash;
- (unsigned long long)inbox;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationListFilter:(id)arg1;
- (void)setCachedConversationPredicate:(id)arg1;
- (bool)unreadOnly;

@end
