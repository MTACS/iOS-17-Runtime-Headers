
@interface ICASAttachmentData : NSObject <AADataEventType> {
    NSArray * _attachmentSummary;
}

@property (nonatomic, readonly) NSArray *attachmentSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentSummary;
- (id)initWithAttachmentSummary:(id)arg1;
- (id)toDict;

@end
