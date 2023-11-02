
@interface GameCenterUI.DetailCollectionViewCell : _TtGC12GameCenterUI32EmbeddableViewCollectionViewCellCS_10DetailView_

@property (nonatomic, readonly) UIView *accessibilityAccessoryView;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic) bool highlighted;

- (id)accessibilityAccessoryView;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end
