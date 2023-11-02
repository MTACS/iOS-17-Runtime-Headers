
@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate> {
    NSTimer * __autoStashTimer;
    UIImageView * __imageView;
    UISwipeGestureRecognizer * __stashGestureRecognizer;
    bool  __stashed;
    UITapGestureRecognizer * __tapGestureRecognizer;
    UISwipeGestureRecognizer * __unstashGestureRecognizer;
    bool  _autoStashesImages;
    <CAMTransientImageWellDelegate> * _delegate;
    long long  _orientation;
}

@property (nonatomic, retain) NSTimer *_autoStashTimer;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (nonatomic, readonly) UISwipeGestureRecognizer *_stashGestureRecognizer;
@property (getter=_isStashed, setter=_setStashed:, nonatomic) bool _stashed;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) UISwipeGestureRecognizer *_unstashGestureRecognizer;
@property (nonatomic) bool autoStashesImages;
@property (nonatomic) bool currentImageHidden;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMTransientImageWellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_autoStashTimer;
- (void)_cancelAutoStashTimer;
- (void)_dismissImageAnimated:(bool)arg1;
- (void)_dismissImageView:(id)arg1 animated:(bool)arg2;
- (void)_handleAutoStashTimerFired:(id)arg1;
- (void)_handleStashSwipe:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleUnstashSwipe:(id)arg1;
- (id)_imageView;
- (struct CGSize { double x1; double x2; })_imageViewMaxSize;
- (struct CGSize { double x1; double x2; })_imageViewSizeForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_imageViewSpawnPoint;
- (struct CGPoint { double x1; double x2; })_imageViewStashPoint;
- (bool)_isStashed;
- (void)_restartAutoStashTimer;
- (void)_restartAutoStashTimerWithDuration:(double)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setStashed:(bool)arg1;
- (void)_setStashed:(bool)arg1 animated:(bool)arg2;
- (id)_stashGestureRecognizer;
- (id)_tapGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unorientedFrameForImageView:(id)arg1;
- (id)_unstashGestureRecognizer;
- (bool)autoStashesImages;
- (void)clearImageAnimated:(bool)arg1;
- (bool)currentImageHidden;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setAutoStashesImages:(bool)arg1;
- (void)setCurrentImageHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)set_autoStashTimer:(id)arg1;

@end
