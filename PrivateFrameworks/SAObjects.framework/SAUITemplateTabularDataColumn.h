
@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic, copy) NSNumber *minimumWidth;
@property (nonatomic, copy) NSNumber *rightMargin;
@property (nonatomic, copy) NSArray *values;

+ (id)tabularDataColumn;
+ (id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)minimumWidth;
- (id)rightMargin;
- (void)setMinimumWidth:(id)arg1;
- (void)setRightMargin:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
