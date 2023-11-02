
@interface SAReminderSiriKitSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *interactions;

+ (id)siriKitSnippet;
+ (id)siriKitSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactions;
- (void)setInteractions:(id)arg1;

@end
