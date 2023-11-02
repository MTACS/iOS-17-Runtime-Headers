
@interface ICDrawingConversionOperation : NSOperation {
    ICAttachment * _attachment;
    NSManagedObjectID * _attachmentID;
    NSManagedObjectID * _finalAttachmentID;
    bool  _isAutomatic;
    ICBaseTextAttachment * _textAttachment;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, readonly) NSManagedObjectID *attachmentID;
@property (nonatomic, readonly) NSManagedObjectID *finalAttachmentID;
@property (nonatomic, readonly) bool isAutomatic;
@property (nonatomic, retain) ICBaseTextAttachment *textAttachment;

- (void).cxx_destruct;
- (id)attachment;
- (id)attachmentID;
- (id)finalAttachmentID;
- (id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(bool)arg3;
- (bool)isAutomatic;
- (void)main;
- (void)setAttachment:(id)arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;

@end
