
@interface SAUITemplateTabularDataGroup : SAUITemplateBaseItem

@property (nonatomic, copy) NSArray *items;

+ (id)tabularDataGroup;
+ (id)tabularDataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:(id)arg1;

@end
