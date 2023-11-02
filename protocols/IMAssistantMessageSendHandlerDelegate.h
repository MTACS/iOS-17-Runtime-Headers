
@protocol IMAssistantMessageSendHandlerDelegate <NSObject>

@required

- (void)sendMessage:(IMMessage *)arg1 toChat:(IMChat *)arg2;

@end
