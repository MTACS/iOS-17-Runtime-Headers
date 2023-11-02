
@interface ADRansacLineResult : NSObject {
    float  _intercept;
    float  _slope;
}

@property (nonatomic) float intercept;
@property (nonatomic) float slope;

- (id)initWithSlope:(float)arg1 intercept:(float)arg2;
- (float)intercept;
- (void)setIntercept:(float)arg1;
- (void)setSlope:(float)arg1;
- (float)slope;

@end
