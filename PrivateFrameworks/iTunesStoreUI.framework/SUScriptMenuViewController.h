
@interface SUScriptMenuViewController : SUScriptViewController {
    SUScriptFunction * _action;
}

@property (retain) WebScriptObject *action;
@property (retain) id items;
@property (retain) NSNumber *selectedIndex;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_viewController;
- (id)action;
- (id)attributeKeys;
- (void)dealloc;
- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)items;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (id)selectedIndex;
- (void)setAction:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
