
@interface SASTItemGroup : SAUISnippet

@property (nonatomic, copy) NSArray *fallbackCommands;
@property (nonatomic, copy) NSArray *templateItems;

+ (id)itemGroup;
+ (id)itemGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fallbackCommands;
- (id)groupIdentifier;
- (void)setFallbackCommands:(id)arg1;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
