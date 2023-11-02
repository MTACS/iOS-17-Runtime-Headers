
@interface _UIKeyShortcutHUDShortcutCell : _UIKeyShortcutHUDMenuCell {
    _UIKeyShortcutHUDShortcut * _shortcut;
    _UIKeyShortcutHUDShortcutInputAccessoryView * _shortcutInputAccessoryView;
}

@property (nonatomic) _UIKeyShortcutHUDShortcut *shortcut;
@property (nonatomic, readonly) _UIKeyShortcutHUDShortcutInputAccessoryView *shortcutInputAccessoryView;

- (void).cxx_destruct;
- (void)configureWithShortcut:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setShortcut:(id)arg1;
- (id)shortcut;
- (id)shortcutInputAccessoryView;

@end
