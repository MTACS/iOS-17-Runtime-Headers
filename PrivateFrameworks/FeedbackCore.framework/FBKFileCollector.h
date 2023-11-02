
@interface FBKFileCollector : NSObject <FBKAttachmentProvider> {
    NSMutableSet * __attachments;
    NSArray * _attachmentDescriptors;
    FBKDECollector * _deCollector;
    <FBKFilerForm> * _filerForm;
    <FBKAttachmentListenerDelegate> * _listener;
    NSURL * _submissionDir;
}

@property (retain) NSMutableSet *_attachments;
@property (nonatomic, retain) NSArray *attachmentDescriptors;
@property (nonatomic, retain) FBKDECollector *deCollector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FBKFilerForm> *filerForm;
@property (readonly) unsigned long long hash;
@property <FBKAttachmentListenerDelegate> *listener;
@property (retain) NSURL *submissionDir;
@property (readonly) Class superclass;

+ (id)diskAccessQueue;
+ (void)findExistingFilesForFilerForm:(id)arg1 matcherPredicates:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addAttachment:(id)arg1;
- (void)_attachURL:(id)arg1 toAttachment:(id)arg2;
- (id)_attachments;
- (id)_fileProcessingQueue;
- (void)_removeAttachment:(id)arg1;
- (void)_updateAttachment:(id)arg1 withState:(long long)arg2;
- (void)addAttachmentWithItemProvider:(id)arg1;
- (void)addFileFromItemProvider:(id)arg1;
- (void)addFileFromURL:(id)arg1 byMoving:(bool)arg2;
- (void)addImageWithItemProvider:(id)arg1;
- (void)addVideoFromItemProvider:(id)arg1;
- (id)attachDraftFiles:(id)arg1 withRequirements:(id)arg2;
- (id)attachLocalFiles:(id)arg1 withRequirements:(id)arg2 shouldCopyFiles:(bool)arg3;
- (id)attachURLSchemeFiles:(id)arg1 withRequirements:(id)arg2;
- (id)attachmentDescriptors;
- (id)attachments;
- (void)cancelCollection:(id)arg1;
- (void)commitWithForm:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)currentDeviceIdentifier;
- (id)deCollector;
- (id)diagnosticExtensionAttachments;
- (id)diskAccessQueue;
- (id)existingAttachmentRegexMatchingFile:(id)arg1;
- (id)filerForm;
- (id)getUniqueFileNameForAttachmentType:(long long)arg1;
- (bool)hasFilePromises;
- (bool)hasUnmetRequirements;
- (id)identifier;
- (id)initWithFilerForm:(id)arg1 attachmentDescriptors:(id)arg2;
- (id)listener;
- (id)newAttachmentWithType:(long long)arg1;
- (id)platform;
- (void)processFileFromURL:(id)arg1 movingFile:(bool)arg2 forAttachment:(id)arg3;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (void)reportAttachingErrorWithAttachment:(id)arg1 userFriendlyError:(id)arg2;
- (id)requirements;
- (void)saveDraftsDirectory;
- (void)setAttachmentDescriptors:(id)arg1;
- (void)setDeCollector:(id)arg1;
- (void)setFilerForm:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setSubmissionDir:(id)arg1;
- (void)set_attachments:(id)arg1;
- (id)submissionDir;
- (void)updateRequirements:(id)arg1;

@end
