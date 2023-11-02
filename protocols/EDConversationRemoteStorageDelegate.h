
@protocol EDConversationRemoteStorageDelegate <NSObject>

@required

- (void)conversationRemoteStorage:(id <EDConversationRemoteStorage>)arg1 didChangeEntries:(NSDictionary *)arg2 reason:(long long)arg3;

@optional

- (void)conversationRemoteStorageDidInitialize:(id <EDConversationRemoteStorage>)arg1;
- (void)conversationRemoteStorageDidResetData:(id <EDConversationRemoteStorage>)arg1;
- (void)conversationRemoteStorageWillResetData:(id <EDConversationRemoteStorage>)arg1;

@end
