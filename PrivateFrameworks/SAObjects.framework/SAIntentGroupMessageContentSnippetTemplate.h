
@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic, copy) NSString *content;
@property (nonatomic) bool sentStatus;

+ (id)messageContentSnippetTemplate;
+ (id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)content;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)sentStatus;
- (void)setContent:(id)arg1;
- (void)setSentStatus:(bool)arg1;

@end
