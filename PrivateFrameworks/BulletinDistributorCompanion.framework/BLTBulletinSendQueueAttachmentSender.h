
@interface BLTBulletinSendQueueAttachmentSender : NSObject {
    NSMutableArray * _urls;
}

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1 key:(id)arg2;
- (id)init;
- (bool)sendAttachmentsWithSender:(id)arg1 timeout:(id)arg2 completion:(id /* block */)arg3;

@end
