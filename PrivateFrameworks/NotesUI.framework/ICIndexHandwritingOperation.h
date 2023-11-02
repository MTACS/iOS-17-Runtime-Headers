
@interface ICIndexHandwritingOperation : NSOperation {
    NSManagedObjectID * _attachmentObjectID;
    NSManagedObjectContext * _context;
}

@property (nonatomic, retain) NSManagedObjectID *attachmentObjectID;
@property (nonatomic, retain) NSManagedObjectContext *context;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (id)attachmentObjectID;
- (id)context;
- (id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2;
- (void)main;
- (void)setAttachmentObjectID:(id)arg1;
- (void)setContext:(id)arg1;

@end
