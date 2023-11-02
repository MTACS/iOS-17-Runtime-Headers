
@interface WRMessagesReplyStoreInfo : WRReplyStoreInfo

- (unsigned long long)defaultCount;
- (id)defaultsChangedNotificationName;
- (id)defaultsDomain;
- (id)defaultsKey;
- (bool)supportsSmartReplies;

@end
