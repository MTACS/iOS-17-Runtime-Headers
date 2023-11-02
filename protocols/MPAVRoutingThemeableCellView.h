
@protocol MPAVRoutingThemeableCellView <NSObject>

@required

- (UIImageView *)iconView;
- (UIView *)separatorView;
- (void)setSubtitleViewAlpha:(double)arg1;
- (UILabel *)subtitleView;
- (UILabel *)titleView;
- (MPVolumeSlider *)volumeSlider;

@end
