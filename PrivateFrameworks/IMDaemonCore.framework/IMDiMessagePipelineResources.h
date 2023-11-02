
@interface IMDiMessagePipelineResources : NSObject {
    IMDAttachmentStore * _attachmentStore;
    <IMDaemonListenerProtocol> * _broadcaster;
    IMDChatRegistry * _chatRegistry;
    IMDAccount * _imdAccount;
    IMDMessageStore * _messageStore;
    IMDRecentsController * _recentsController;
    IDSService * _service;
    IMDMessageFromStorageController * _storageController;
}

@property (nonatomic, readonly) IMDAttachmentStore *attachmentStore;
@property (nonatomic, readonly) <IMDaemonListenerProtocol> *broadcaster;
@property (nonatomic, readonly) IMDChatRegistry *chatRegistry;
@property (nonatomic, readonly) IMDAccount *imdAccount;
@property (nonatomic, readonly) IMDMessageStore *messageStore;
@property (nonatomic, readonly) IMDRecentsController *recentsController;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic, readonly) IMDMessageFromStorageController *storageController;

- (void).cxx_destruct;
- (id)attachmentStore;
- (id)broadcaster;
- (id)chatRegistry;
- (id)imdAccount;
- (id)initWithIMDAccount:(id)arg1 service:(id)arg2 messageStore:(id)arg3 storageController:(id)arg4 broadcaster:(id)arg5 recentsController:(id)arg6 chatRegistry:(id)arg7 attachmentStore:(id)arg8;
- (id)messageStore;
- (id)recentsController;
- (id)service;
- (id)storageController;

@end
