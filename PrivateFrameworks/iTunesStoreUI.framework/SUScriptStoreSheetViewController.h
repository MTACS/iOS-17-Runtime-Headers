
@interface SUScriptStoreSheetViewController : SUScriptViewController

@property long long productPageStyle;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)loadWithProductParameters:(id)arg1;
- (void)loadWithProductURL:(id)arg1;
- (id)newNativeViewController;
- (long long)productPageStyle;
- (long long)productPageStyleAutomatic;
- (long long)productPageStylePad;
- (long long)productPageStylePhone;
- (id)scriptAttributeKeys;
- (void)setProductPageStyle:(long long)arg1;

@end
