
@interface SAUITemplateTemplatedSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *templateItems;

+ (id)templatedSnippet;
+ (id)templatedSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
