
@interface SAUIHtmlView : SAAceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *html;

+ (id)htmlView;
+ (id)htmlViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)html;
- (void)setCommands:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHtml:(id)arg1;

@end
