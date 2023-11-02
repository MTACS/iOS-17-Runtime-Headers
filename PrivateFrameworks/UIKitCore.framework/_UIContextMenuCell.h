
@interface _UIContextMenuCell : UICollectionViewCell

@property (nonatomic, readonly) _UIContextMenuCellContentView *actionView;

+ (Class)_contentViewClass;
+ (bool)_isInternalCell;
+ (bool)_wantsLegacyMenuGesture;

- (bool)_allowsHorizontalFocusMovement;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (long long)_focusItemDeferralMode;
- (void)_updateStateWithAnimationCoordinator:(id)arg1 animated:(bool)arg2;
- (bool)_wantsKeyCommandsWhenDeferred;
- (id)actionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 forHover:(bool)arg2;
- (void)setSelected:(bool)arg1;

@end
