
@interface TSWPPadding : NSObject {
    double  _bottomInset;
    double  _leftInset;
    double  _rightInset;
    double  _topInset;
}

@property (nonatomic) double bottomInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) double topInset;

+ (id)padding;
+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;

- (double)bottomInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)leftInset;
- (double)rightInset;
- (void)setBottomInset:(double)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setRightInset:(double)arg1;
- (void)setTopInset:(double)arg1;
- (double)topInset;
- (void)transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
