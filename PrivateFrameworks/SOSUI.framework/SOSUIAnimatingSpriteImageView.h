
@interface SOSUIAnimatingSpriteImageView : UIView {
    unsigned long long  _framesPerSecond;
    CALayer * _imageLayer;
    long long  _spriteColumnCount;
    long long  _spriteFrameCount;
    UIImage * _spriteImage;
}

@property (nonatomic) unsigned long long framesPerSecond;
@property (nonatomic) long long spriteColumnCount;
@property (nonatomic) long long spriteFrameCount;
@property (nonatomic, retain) UIImage *spriteImage;

+ (id)_createNewSpriteArray:(id)arg1 currentFrame:(unsigned long long)arg2 arraySize:(unsigned long long)arg3 interrupted:(bool)arg4;

- (void).cxx_destruct;
- (id)_centerPointValues;
- (unsigned long long)_findSpriteIndex:(struct CGPoint { double x1; double x2; })arg1 centerPoints:(id)arg2;
- (struct CGSize { double x1; double x2; })_spriteFrameSize;
- (void)animateOnce;
- (unsigned long long)framesPerSecond;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setFramesPerSecond:(unsigned long long)arg1;
- (void)setSpriteColumnCount:(long long)arg1;
- (void)setSpriteFrameCount:(long long)arg1;
- (void)setSpriteImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)spriteColumnCount;
- (long long)spriteFrameCount;
- (id)spriteImage;
- (void)startAnimating;
- (void)stopAnimatingFinishingCycle:(bool)arg1;
- (void)updateLayerWithTintColor;

@end
