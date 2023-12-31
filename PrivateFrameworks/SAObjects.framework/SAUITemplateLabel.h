
@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic, copy) NSDictionary *attributedTexts;
@property (nonatomic, retain) SAUITemplateAttributedString *text;

+ (id)label;
+ (id)labelWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributedTexts;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttributedTexts:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
