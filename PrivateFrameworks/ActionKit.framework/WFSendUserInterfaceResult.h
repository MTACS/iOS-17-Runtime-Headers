
@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding> {
    NSArray * _attachments;
    NSString * _content;
    NSArray * _recipients;
    NSString * _subject;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *subject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipients;
- (void)setAttachments:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
