
@interface IMAssistantMessageSendHandlerDefaultDelegate : NSObject <IMAssistantMessageSendHandlerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)sendMessage:(id)arg1 toChat:(id)arg2;

@end
