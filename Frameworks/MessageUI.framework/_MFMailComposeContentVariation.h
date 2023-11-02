
@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding> {
    NSMutableArray * _attachmentIdentifiers;
    NSString * _body;
    bool  _bodyIsHTML;
    NSString * _name;
}

@property (nonatomic, copy) NSArray *attachmentIdentifiers;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) bool bodyIsHTML;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttachmentIdentifier:(id)arg1;
- (id)attachmentIdentifiers;
- (id)body;
- (bool)bodyIsHTML;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setAttachmentIdentifiers:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyIsHTML:(bool)arg1;
- (void)setName:(id)arg1;

@end
