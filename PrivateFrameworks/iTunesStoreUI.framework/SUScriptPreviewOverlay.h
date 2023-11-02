
@interface SUScriptPreviewOverlay : SUScriptObject

@property (copy) id height;
@property (copy) id right;
@property (copy) id top;
@property (copy) NSString *userInfo;
@property (getter=isVisible, readonly) id visible;
@property (copy) id width;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)height;
- (void)hide:(id)arg1;
- (id)isVisible;
- (void)loadURLRequest:(id)arg1;
- (id)right;
- (id)scriptAttributeKeys;
- (void)setHeight:(id)arg1;
- (void)setRight:(id)arg1;
- (void)setTop:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWidth:(id)arg1;
- (void)show:(id)arg1;
- (id)top;
- (id)userInfo;
- (id)width;

@end
