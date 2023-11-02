
@interface ICASAttachmentSnapshotItemData : NSObject <AADataEventType> {
    NSString * _attachmentID;
    NSString * _attachmentTypeUTI;
}

@property (nonatomic, readonly) NSString *attachmentID;
@property (nonatomic, readonly) NSString *attachmentTypeUTI;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)attachmentTypeUTI;
- (id)initWithAttachmentID:(id)arg1 attachmentTypeUTI:(id)arg2;
- (id)toDict;

@end
