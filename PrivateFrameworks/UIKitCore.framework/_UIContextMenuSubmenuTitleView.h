
@interface _UIContextMenuSubmenuTitleView : UICollectionReusableView {
    bool  _allowsFocus;
    UIVisualEffectView * _bgView;
    _UIContextMenuCellContentView * _contentView;
    bool  _highlighted;
    UIView * _highlightedBgView;
    UIVisualEffectView * _obscuringMaterialView;
    UIView * _separator;
}

@property (nonatomic) bool allowsFocus;
@property (nonatomic, retain) UIVisualEffectView *bgView;
@property (nonatomic, readonly) _UIContextMenuCellContentView *contentView;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIView *highlightedBgView;
@property (nonatomic, retain) UIVisualEffectView *obscuringMaterialView;
@property (nonatomic, retain) UIView *separator;

- (void).cxx_destruct;
- (long long)_focusItemDeferralMode;
- (bool)_wantsKeyCommandsWhenDeferred;
- (void)addObscuringMaterialViewWithGroupName:(id)arg1;
- (bool)allowsFocus;
- (id)bgView;
- (bool)canBecomeFocused;
- (id)contentView;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)highlighted;
- (id)highlightedBgView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)obscuringMaterialView;
- (id)separator;
- (void)setAllowsFocus:(bool)arg1;
- (void)setBackgroundMaterialGroupName:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBgView:(id)arg1;
- (void)setObscuringMaterialView:(id)arg1;
- (void)setSeparator:(id)arg1;

@end
