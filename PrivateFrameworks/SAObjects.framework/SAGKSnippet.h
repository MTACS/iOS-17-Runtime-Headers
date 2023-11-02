
@interface SAGKSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic, copy) NSArray *pods;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)appPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pods;
- (void)setAppPunchOut:(id)arg1;
- (void)setPods:(id)arg1;

@end
