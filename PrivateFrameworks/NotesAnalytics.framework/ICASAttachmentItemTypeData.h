
@interface ICASAttachmentItemTypeData : NSObject <AADataEventType> {
    NSString * _attachmentID;
    NSString * _attachmentUTI;
}

@property (nonatomic, readonly) NSString *attachmentID;
@property (nonatomic, readonly) NSString *attachmentUTI;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)attachmentUTI;
- (id)initWithAttachmentID:(id)arg1 attachmentUTI:(id)arg2;
- (id)toDict;

@end
