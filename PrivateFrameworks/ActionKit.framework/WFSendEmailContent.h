
@interface WFSendEmailContent : NSObject <NSSecureCoding> {
    NSArray * _attachments;
    NSArray * _bccRecipients;
    NSString * _body;
    NSArray * _ccRecipients;
    bool  _isHTML;
    NSString * _subject;
    NSArray * _toRecipients;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSArray *bccRecipients;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *ccRecipients;
@property (nonatomic) bool isHTML;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *toRecipients;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)bccRecipients;
- (id)body;
- (id)ccRecipients;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isHTML;
- (void)setAttachments:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setIsHTML:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)subject;
- (id)toRecipients;

@end
