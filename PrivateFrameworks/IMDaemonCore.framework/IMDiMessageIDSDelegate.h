
@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate> {
    IMDAccountController * _accountController;
    IMDAttachmentStore * _attachmentStore;
    IDSService * _bizChatService;
    IMDChatRegistry * _chatRegistry;
    IMDiMessageIncomingMessageHandler * _handler;
    IDSService * _idsService;
    IMDMessageFromStorageController * _messageFromStorageController;
    IMDMessageStore * _messageStore;
    IMDRecentsController * _recentsController;
    bool  _runningInAutomation;
}

@property (readonly, retain) IMDAccountController *accountController;
@property (readonly, retain) IMDAttachmentStore *attachmentStore;
@property (readonly, retain) IDSService *bizChatService;
@property (readonly, retain) IMDChatRegistry *chatRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) IMDiMessageIncomingMessageHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly, retain) IDSService *idsService;
@property (readonly, retain) IMDMessageFromStorageController *messageFromStorageController;
@property (readonly, retain) IMDMessageStore *messageStore;
@property (readonly, retain) IMDRecentsController *recentsController;
@property bool runningInAutomation;
@property (readonly) Class superclass;

+ (void)addLockdownCommandHandlersToRegistry:(id)arg1;
+ (void)addStandardCommandHandlersToRegistry:(id)arg1;
+ (id)commandHandlerRegistry;
+ (bool)isDefaultPairedDevice:(id)arg1 withAccount:(id)arg2;

- (void).cxx_destruct;
- (id)accountController;
- (id)attachmentStore;
- (id)bizChatService;
- (id)broadcaster;
- (id)chatRegistry;
- (id)handler;
- (id)idsService;
- (id)init;
- (id)initWithiMessageService:(id)arg1 bizChatService:(id)arg2 incomingMessageHandler:(id)arg3 messageStore:(id)arg4 chatRegistry:(id)arg5 accountController:(id)arg6 storageController:(id)arg7 recentsController:(id)arg8 attachmentStore:(id)arg9;
- (id)messageFromStorageController;
- (id)messageStore;
- (id)recentsController;
- (bool)runningInAutomation;
- (void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)setRunningInAutomation:(bool)arg1;

@end
