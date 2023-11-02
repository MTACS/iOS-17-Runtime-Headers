
@interface SAPhoneCallSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *calls;

+ (id)callSnippet;
+ (id)callSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)calls;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCalls:(id)arg1;

@end
