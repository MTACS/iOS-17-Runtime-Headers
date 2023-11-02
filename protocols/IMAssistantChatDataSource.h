
@protocol IMAssistantChatDataSource <NSObject>

@required

- (NSArray *)allExistingChats;
- (NSArray *)allGUIDsForChat:(IMChat *)arg1;
- (bool)blackholedChatsExist;
- (IMChat *)chatForIMHandle:(IMHandle *)arg1;
- (IMChat *)chatForIMHandles:(NSArray *)arg1;
- (IMChat *)existingChatForAddresses:(NSArray *)arg1 allowRetargeting:(bool)arg2 bestHandles:(id*)arg3;
- (IMChat *)existingChatWithChatIdentifier:(NSString *)arg1;

@end
