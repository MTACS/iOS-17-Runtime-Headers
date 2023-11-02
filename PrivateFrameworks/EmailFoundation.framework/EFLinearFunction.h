
@interface EFLinearFunction : NSObject {
    double  _intercept;
    double  _slope;
}

@property (nonatomic) double intercept;
@property (nonatomic) double slope;

- (double)evaluateReverse:(double)arg1;
- (double)evaluateX:(double)arg1;
- (id)initWithLineThroughPoints:(id)arg1;
- (id)initWithSlope:(double)arg1 intercept:(double)arg2;
- (double)intercept;
- (void)setIntercept:(double)arg1;
- (void)setSlope:(double)arg1;
- (double)slope;

@end
