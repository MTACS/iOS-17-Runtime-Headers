
@interface SUScriptRedeemViewController : SUScriptViewController {
    long long  _category;
    NSString * _initialCode;
}

@property (nonatomic, copy) NSString *initialCode;
@property (nonatomic, readonly) long long redeemCategoryApps;
@property (nonatomic, readonly) long long redeemCategoryBooks;
@property (nonatomic, readonly) long long redeemCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)initialCode;
- (id)newNativeViewController;
- (long long)redeemCategoryApps;
- (long long)redeemCategoryBooks;
- (long long)redeemCategoryMedia;
- (id)scriptAttributeKeys;
- (void)setInitialCode:(id)arg1;
- (void)setRedeemStyle:(long long)arg1;

@end
