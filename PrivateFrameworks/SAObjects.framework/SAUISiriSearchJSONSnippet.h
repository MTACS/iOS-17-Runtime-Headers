
@interface SAUISiriSearchJSONSnippet : SAUISnippet

@property (nonatomic, copy) NSString *clientTemplate;

+ (id)siriSearchJSONSnippet;
+ (id)siriSearchJSONSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientTemplate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setClientTemplate:(id)arg1;

@end
