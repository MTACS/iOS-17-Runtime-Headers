
@interface CKNavigationBarTitleView : _UINavigationBarTitleView {
    bool  _editing;
}

@property (getter=isEditing, nonatomic) bool editing;

- (void)_setTrailingItemsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(bool)arg1;
- (void)contentDidChange;
- (bool)isEditing;
- (void)setEditing:(bool)arg1;
- (void)updateIfNeeded:(bool)arg1;

@end
