
@interface ICASPdfAttachmentData : NSObject <AADataEventType> {
    NSString * _attachmentID;
    NSNumber * _hasActivity;
}

@property (nonatomic, readonly) NSString *attachmentID;
@property (nonatomic, readonly) NSNumber *hasActivity;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)hasActivity;
- (id)initWithAttachmentID:(id)arg1 hasActivity:(id)arg2;
- (id)toDict;

@end
