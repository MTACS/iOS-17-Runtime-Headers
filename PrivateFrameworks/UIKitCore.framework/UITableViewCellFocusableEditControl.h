
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView * _focusedFloatingContentView;
}

- (void).cxx_destruct;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (bool)_shouldHandlePressEvent:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsImageShadow;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
