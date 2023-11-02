
@interface PKImageSequenceView : UIView {
    unsigned long long  _activeImageIndex;
    unsigned long long  _animationContext;
    UIImageView * _fadeInImageView;
    UIImageView * _imageView;
    NSArray * _images;
    bool  _isAnimating;
}

- (void).cxx_destruct;
- (void)_finishedTransitionToImage:(id)arg1;
- (void)_transitionToImage:(id)arg1 immedately:(bool)arg2 fast:(bool)arg3;
- (id)initWitImages:(id)arg1;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (void)updateImages:(id)arg1;

@end
