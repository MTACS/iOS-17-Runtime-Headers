
@interface ConversationKit.VideoMessageInboxController : _TtCs12_SwiftObject <_FTMSMessageStoreControllerDelegate> {
    void $__lazy_storage_$_messageDeletionHandler;
    void $__lazy_storage_$_messageStoreController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _callItems;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loadInProgress;
}

- (void)messageStoreDidAddMessages:(id)arg1;
- (void)messageStoreDidDeleteMessages:(id)arg1;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)arg1;
- (void)messageStoreDidUpdateMessages:(id)arg1;

@end
