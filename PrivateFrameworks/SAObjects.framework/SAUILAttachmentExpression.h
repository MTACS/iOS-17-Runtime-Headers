
@interface SAUILAttachmentExpression : SAUILParseableExpression

@property (nonatomic, retain) <SAAceSerializable> *attachmentExpression;

+ (id)attachmentExpression;
+ (id)attachmentExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachmentExpression;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttachmentExpression:(id)arg1;

@end
