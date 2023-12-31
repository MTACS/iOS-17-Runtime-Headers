
@interface ICRemoteFileAttachmentDownloader : NSObject {
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationsByAttachmentIdentifier;
}

@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableDictionary *operationsByAttachmentIdentifier;

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)arg1;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (bool)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;
+ (id)sharedDownloader;

- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadRemoteFileForAttachment:(id)arg1;
- (void)downloadRemoteFileForAttachmentObjectID:(id)arg1;
- (void)downloadUndownloadedLegacyAttachments;
- (id)init;
- (id)operationQueue;
- (id)operationsByAttachmentIdentifier;
- (void)reachabilityChanged:(id)arg1;
- (void)resumeDownloadsAfterDelay;
- (void)setOperationQueue:(id)arg1;
- (void)setOperationsByAttachmentIdentifier:(id)arg1;

@end
