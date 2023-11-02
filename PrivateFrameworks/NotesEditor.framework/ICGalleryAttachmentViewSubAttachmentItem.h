
@interface ICGalleryAttachmentViewSubAttachmentItem : NSObject {
    ICAttachment * _attachment;
    NSString * _attachmentIdentifier;
    NSManagedObjectContext * _context;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, copy) NSString *attachmentIdentifier;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)attachment;
- (id)attachmentIdentifier;
- (id)context;
- (id)initWithAttachmentIdentifier:(id)arg1 context:(id)arg2;
- (void)invalidateSize;
- (bool)isEqual:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)updateSize;

@end
