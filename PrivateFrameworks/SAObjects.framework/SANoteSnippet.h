
@interface SANoteSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *notes;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notes;
- (void)setNotes:(id)arg1;

@end
