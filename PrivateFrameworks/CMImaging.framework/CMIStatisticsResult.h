
@interface CMIStatisticsResult : NSObject {
    float  _area;
    float  _max;
    float  _min;
    float  _sum;
    float  _sumOfSquares;
}

@property (nonatomic, readonly) float max;
@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float min;
@property (nonatomic, readonly) float sum;
@property (nonatomic, readonly) float variance;

- (id)initWithMin:(float)arg1 max:(float)arg2 sum:(float)arg3 sumOfSquares:(float)arg4 area:(float)arg5;
- (float)max;
- (float)mean;
- (float)min;
- (float)sum;
- (float)variance;

@end
