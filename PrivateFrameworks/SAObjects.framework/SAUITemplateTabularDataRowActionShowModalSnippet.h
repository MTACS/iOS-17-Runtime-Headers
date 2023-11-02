
@interface SAUITemplateTabularDataRowActionShowModalSnippet : SAUITemplateTabularDataRowAction

@property (nonatomic, retain) <SAServerBoundCommand> *fetchContentCommand;

+ (id)tabularDataRowActionShowModalSnippet;
+ (id)tabularDataRowActionShowModalSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fetchContentCommand;
- (id)groupIdentifier;
- (void)setFetchContentCommand:(id)arg1;

@end
