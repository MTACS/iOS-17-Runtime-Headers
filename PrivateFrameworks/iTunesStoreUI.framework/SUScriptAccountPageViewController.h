
@interface SUScriptAccountPageViewController : SUScriptStorePageViewController

@property (retain) NSString *style;
@property (readonly) NSString *styleNameDefault;
@property (readonly) NSString *styleNameSignUp;
@property (readonly) NSString *styleNameViewAccount;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)styleNameDefault;
- (id)styleNameSignUp;
- (id)styleNameViewAccount;

@end
