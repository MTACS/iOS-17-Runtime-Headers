
@interface AVExternalPlaybackIndicatorView : UIView {
    UIView * _containerView;
    UIImageView * _imageView;
    bool  _shouldShowIndicator;
    UILabel * _subtitleLabel;
    NSString * _subtitleString;
    UILabel * _titleLabel;
    NSString * _titleString;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setTitleString:(id)arg1 subtitleString:(id)arg2;

@end
