
@interface SAUITemplateGroupView : SAUITemplateBaseItemGroup

@property (nonatomic, copy) NSString *alignment;
@property (nonatomic, copy) NSString *layoutStyle;

+ (id)groupView;
+ (id)groupViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)layoutStyle;
- (void)setAlignment:(id)arg1;
- (void)setLayoutStyle:(id)arg1;

@end
