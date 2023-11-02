
@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (nonatomic, retain) SAUISnippet *detailSnippet;
@property (nonatomic, copy) NSArray *intentSlotKeyPaths;
@property (nonatomic, copy) NSString *key;

+ (id)snippetTemplate;
+ (id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)detailSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentSlotKeyPaths;
- (id)key;
- (void)setDetailSnippet:(id)arg1;
- (void)setIntentSlotKeyPaths:(id)arg1;
- (void)setKey:(id)arg1;

@end
