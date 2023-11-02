
@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator {
    CAMLivePhotoBloomView * __bloomView;
    long long  _livePhotoMode;
}

@property (nonatomic, readonly) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;

- (void).cxx_destruct;
- (id)_bloomView;
- (void)_updateTintColor;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setLivePhotoMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseOutline;
- (bool)shouldUseSlash;
- (void)startAnimating;
- (void)stopAnimating;

@end
