
@interface SUNativeScriptMenuViewController : SUMenuViewController {
    SUScriptFunction * _action;
    NSArray * _menuItems;
}

@property (nonatomic, retain) SUScriptFunction *action;
@property (nonatomic, retain) NSArray *menuItems;

- (id)action;
- (id)copyScriptViewController;
- (void)dealloc;
- (bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (id)menuItems;
- (long long)numberOfMenuItems;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (void)setAction:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;

@end
