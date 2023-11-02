
@interface SAUIErrorSnippet : SAUISnippet

@property (nonatomic, copy) NSString *message;

+ (id)errorSnippet;
+ (id)errorSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)message;
- (void)setMessage:(id)arg1;

@end
