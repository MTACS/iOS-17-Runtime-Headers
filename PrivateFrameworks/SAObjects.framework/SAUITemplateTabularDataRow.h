
@interface SAUITemplateTabularDataRow : SAUITemplateTabularDataGroup

@property (nonatomic, copy) NSArray *actions;

+ (id)tabularDataRow;
+ (id)tabularDataRowWithDictionary:(id)arg1 context:(id)arg2;

- (id)actions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActions:(id)arg1;

@end
