
@interface PFParallaxLayoutTextOverlapParameters : NSObject {
    double  _bottomAreaHeight;
    double  _maxBottomOverlap;
    double  _targetBottomOverlap;
}

@property (nonatomic, readonly) double bottomAreaHeight;
@property (nonatomic, readonly) double maxBottomOverlap;
@property (nonatomic, readonly) double targetBottomOverlap;

+ (void)setSystemParameters:(id)arg1;
+ (id)standardAlphabeticTextParameters;
+ (id)standardNumericTextParameters;
+ (id)systemParameters;

- (double)bottomAreaHeight;
- (double)maxBottomOverlap;
- (double)maxTopOverlapForTopRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isInteractive:(bool)arg2;
- (double)targetBottomOverlap;

@end
