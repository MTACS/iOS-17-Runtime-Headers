
@interface ESDownloadContext : NSObject {
    NSString * _accountID;
    NSString * _attachmentUUID;
    id /* block */  _completionBlock;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *attachmentUUID;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly, copy) id /* block */ progressBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)accountID;
- (id)attachmentUUID;
- (id /* block */)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (id /* block */)progressBlock;
- (id)queue;
- (void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

@end
