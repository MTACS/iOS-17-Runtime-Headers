
@interface SAUITemplateTemplatedModalView : SAAceView

@property (nonatomic, copy) NSArray *templateItems;

+ (id)templatedModalView;
+ (id)templatedModalViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
