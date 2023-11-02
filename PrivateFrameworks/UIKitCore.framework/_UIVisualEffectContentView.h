
@interface _UIVisualEffectContentView : _UIVisualEffectSubview {
    bool  _currentlyDisplayingRequestedEffects;
    bool  _disableGroupFiltering;
}

- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (id)description;
- (void)didAddSubview:(id)arg1;
- (bool)disableGroupFiltering;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisableGroupFiltering:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
