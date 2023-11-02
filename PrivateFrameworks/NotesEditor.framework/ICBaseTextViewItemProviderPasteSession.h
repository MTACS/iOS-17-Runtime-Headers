
@interface ICBaseTextViewItemProviderPasteSession : ICBaseTextViewPasteSession {
    bool  _isForDragAndDrop;
    NSMutableSet * _mutableErrorCodes;
    NSManagedObjectID * _noteObjectID;
    unsigned long long  _numberOfAttachmentImagesPreloaded;
    unsigned long long  _numberOfAttachmentsAttemptedAdded;
    unsigned long long  _numberOfTrailingNewlinesStripped;
    bool  _shouldFilterAttributedString;
    bool  _supportsAttachments;
    NSManagedObjectContext * _workerContext;
}

@property (nonatomic, readonly) NSSet *errorCodes;
@property (nonatomic) bool isForDragAndDrop;
@property (nonatomic, retain) NSMutableSet *mutableErrorCodes;
@property (nonatomic, retain) NSManagedObjectID *noteObjectID;
@property (nonatomic) unsigned long long numberOfAttachmentImagesPreloaded;
@property (nonatomic) unsigned long long numberOfAttachmentsAttemptedAdded;
@property (nonatomic) unsigned long long numberOfTrailingNewlinesStripped;
@property (nonatomic) bool shouldFilterAttributedString;
@property (nonatomic) bool supportsAttachments;
@property (nonatomic, retain) NSManagedObjectContext *workerContext;
@property (nonatomic, readonly) ICNote *workerNote;

- (void).cxx_destruct;
- (void)addErrorWithCode:(long long)arg1;
- (id)errorCodes;
- (void)incrementNumberOfAttachmentsAttemptedAdded;
- (id)initWithNoteObjectID:(id)arg1;
- (bool)isForDragAndDrop;
- (id)mutableErrorCodes;
- (id)noteObjectID;
- (unsigned long long)numberOfAttachmentImagesPreloaded;
- (unsigned long long)numberOfAttachmentsAttemptedAdded;
- (unsigned long long)numberOfTrailingNewlinesStripped;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)saveWorkerContext;
- (void)setIsForDragAndDrop:(bool)arg1;
- (void)setMutableErrorCodes:(id)arg1;
- (void)setNoteObjectID:(id)arg1;
- (void)setNumberOfAttachmentImagesPreloaded:(unsigned long long)arg1;
- (void)setNumberOfAttachmentsAttemptedAdded:(unsigned long long)arg1;
- (void)setNumberOfTrailingNewlinesStripped:(unsigned long long)arg1;
- (void)setShouldFilterAttributedString:(bool)arg1;
- (void)setSupportsAttachments:(bool)arg1;
- (void)setWorkerContext:(id)arg1;
- (bool)shouldFilterAttributedString;
- (bool)supportsAttachments;
- (id)workerContext;
- (id)workerNote;

@end
