
@interface SAUITemplateKeyline : SAUITemplateBaseItem

@property (nonatomic, copy) NSNumber *width;

+ (id)keyline;
+ (id)keylineWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWidth:(id)arg1;
- (id)width;

@end
