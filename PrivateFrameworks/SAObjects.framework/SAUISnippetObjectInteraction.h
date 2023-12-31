
@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (nonatomic, retain) SADomainObject *object;

+ (id)snippetObjectInteraction;
+ (id)snippetObjectInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (bool)requiresResponse;
- (void)setObject:(id)arg1;

@end
