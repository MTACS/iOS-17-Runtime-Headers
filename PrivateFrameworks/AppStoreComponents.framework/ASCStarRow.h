
@interface ASCStarRow : UIView {
    double  _maxNumberOfStars;
    double  _numberOfStarsInRow;
    UIColor * _starColor;
    UIImageView * _starImageView;
    CAReplicatorLayer * _starLayer;
    long long  _starSize;
}

@property (nonatomic, readonly) double maxNumberOfStars;
@property (nonatomic) double numberOfStarsInRow;
@property (nonatomic, readonly) UIColor *starColor;
@property (nonatomic, readonly) UIImageView *starImageView;
@property (nonatomic, readonly) CAReplicatorLayer *starLayer;
@property (nonatomic, readonly) long long starSize;

+ (struct CGSize { double x1; double x2; })sizeForStarRowWithSizeOfStar:(long long)arg1 andNumberOfStars:(double)arg2;
+ (id)starForSize:(long long)arg1 withFill:(bool)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCurrentRating:(double)arg1 andStarSize:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStarSize:(long long)arg1 fill:(bool)arg2 starColor:(id)arg3 andMaxNumberOfStars:(double)arg4;
- (double)maxNumberOfStars;
- (void)modifyStarLayerRectToHideOuterPaddingUsing:(id)arg1;
- (double)numberOfStarsInRow;
- (void)setNumberOfStarsInRow:(double)arg1;
- (id)starColor;
- (id)starImageView;
- (id)starLayer;
- (long long)starSize;

@end
