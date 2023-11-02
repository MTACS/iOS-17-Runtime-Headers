
@interface ASCStarRatingView : UIView {
    ASCStarRow * _filledStarRowView;
    ASCStarRow * _hollowStarRowView;
    long long  _maxNumberOfStars;
    double  _rating;
    UIColor * _starColor;
    long long  _starSize;
}

@property (nonatomic, readonly) ASCStarRow *filledStarRowView;
@property (nonatomic, readonly) ASCStarRow *hollowStarRowView;
@property (nonatomic, readonly) long long maxNumberOfStars;
@property (nonatomic) double rating;
@property (nonatomic, readonly) UIColor *starColor;
@property (nonatomic, readonly) long long starSize;

+ (id)greyFill;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)filledStarRowView;
- (id)hollowStarRowView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMaxNumberOfStars:(long long)arg1 starSize:(long long)arg2 andFill:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)maxNumberOfStars;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (double)rating;
- (void)setRating:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeWithStarSize:(long long)arg1 andNumberOfStars:(long long)arg2;
- (id)starColor;
- (long long)starSize;

@end
