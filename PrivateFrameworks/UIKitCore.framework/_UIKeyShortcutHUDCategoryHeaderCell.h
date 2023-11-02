
@interface _UIKeyShortcutHUDCategoryHeaderCell : _UIKeyShortcutHUDMenuCell {
    _UIKeyShortcutHUDMenu * _categoryMenu;
}

@property (nonatomic) _UIKeyShortcutHUDMenu *categoryMenu;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)categoryMenu;
- (void)configureWithCategory:(id)arg1;
- (id)defaultContentConfiguration;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setCategoryMenu:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
