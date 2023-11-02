
@interface FBKAttachmentManager : NSObject <FBKAttachmentListenerDelegate> {
    NSArray * _attachments;
    FBKDECollector * _deCollector;
    <FBKAttachmentManagerDelegate> * _delegate;
    FBKFileCollector * _fileCollector;
    NSSet * _pendingRequirements;
    unsigned long long  _state;
    FBKGroupedDevice * _targetDevice;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) FBKDECollector *deCollector;
@property (nonatomic) <FBKAttachmentManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) FBKFileCollector *fileCollector;
@property (nonatomic, retain) NSSet *pendingRequirements;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) FBKGroupedDevice *targetDevice;

- (void).cxx_destruct;
- (void)abortAllSessions;
- (void)addAttachmentWithItemProvider:(id)arg1;
- (void)addFileFrom:(id)arg1 byMoving:(bool)arg2;
- (id)attachmentForIndexPath:(id)arg1;
- (long long)attachmentIndex:(id)arg1;
- (void)attachmentProvider:(id)arg1 didAddAttachment:(id)arg2;
- (void)attachmentProvider:(id)arg1 didFinishAttaching:(id)arg2 error:(id)arg3;
- (void)attachmentProvider:(id)arg1 didFinishLoadingWithAttachments:(id)arg2 error:(id)arg3;
- (void)attachmentProvider:(id)arg1 didRemoveAttachment:(id)arg2;
- (void)attachmentProvider:(id)arg1 didStartAttaching:(id)arg2;
- (void)attachmentProvider:(id)arg1 didTakeAttachment:(id)arg2 fromOtherProvider:(id)arg3;
- (void)attachmentProvider:(id)arg1 didUpdateAttachment:(id)arg2;
- (id)attachments;
- (bool)canCancelAttachmentCollection:(id)arg1;
- (bool)canDeleteAttachment:(id)arg1;
- (id)deCollector;
- (id)delegate;
- (id)description;
- (id)fileCollector;
- (void)gatherAttachment:(id)arg1 answers:(id)arg2;
- (void)gatherFilesWithDedExtension:(id)arg1 answers:(id)arg2;
- (bool)hasFilePromises;
- (bool)hasUnmetRequirementAttachments;
- (id)initWithMatcherPredicates:(id)arg1 pendingFileUrls:(id)arg2 pendingExtensions:(id)arg3 form:(id)arg4 targetDevice:(id)arg5 shouldGetSessionStatus:(bool)arg6 shouldCheckDeferredLogs:(bool)arg7 attachmentDescriptors:(id)arg8;
- (bool)isAttachmentParent:(id)arg1;
- (id)pendingRequirements;
- (id)popPendingRequirements;
- (void)postLaunchAttachLocalFiles:(id)arg1 allRequirements:(id)arg2;
- (void)removeAllAttachments;
- (void)setAttachments:(id)arg1;
- (void)setDeCollector:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileCollector:(id)arg1;
- (void)setPendingRequirements:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTargetDevice:(id)arg1;
- (unsigned long long)state;
- (id)targetDevice;
- (void)updateRequirements:(id)arg1;

@end
