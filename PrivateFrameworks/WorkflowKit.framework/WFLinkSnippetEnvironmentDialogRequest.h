
@interface WFLinkSnippetEnvironmentDialogRequest : WFDialogRequest <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribution:(id)arg1 prompt:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
