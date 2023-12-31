
@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (nonatomic, copy) NSString *attributeName;
@property (nonatomic, copy) NSString *attributeValue;

+ (id)snippetAttributeOpened;
+ (id)snippetAttributeOpenedWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributeName;
- (id)attributeValue;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAttributeName:(id)arg1;
- (void)setAttributeValue:(id)arg1;

@end
