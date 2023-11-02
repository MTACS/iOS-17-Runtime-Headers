
@interface _UIKeyShortcutHUDMenu : _UIKeyShortcutHUDMenuElement <NSSecureCoding> {
    NSArray * _children;
}

@property (nonatomic, readonly) NSArray *children;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) UIMenu *uiMenu;

+ (id)menuWithUIMenu:(id)arg1 children:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)arg1 shortcutVisit:(id /* block */)arg2;
- (id)children;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)menuByReplacingChildren:(id)arg1;
- (id)uiMenu;

@end
