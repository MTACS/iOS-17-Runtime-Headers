
@protocol TUConversationContactProvider <NSObject>

@required

- (NSDictionary *)tu_contactsByConversationMemberForConversationMembers:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;
- (NSDictionary *)tu_contactsByRemoteConversationMemberForConversations:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;

@end
