
@protocol MediaControlsCollectionItemViewController <NSObject>

@required

- (UIView *)backgroundView;
- (UIView *)contentView;
- (bool)isSelected;
- (void)setBackgroundView:(UIView *)arg1;
- (void)setSelected:(bool)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(MediaControlsStyleCoordinator *)arg2;

@end
