
@interface CUKalmanConfiguration : NSObject {
    double  _paramA;
    double  _paramB;
    double  _paramC;
    double  _paramQ;
    double  _paramR;
}

@property (nonatomic, readonly) double paramA;
@property (nonatomic, readonly) double paramB;
@property (nonatomic, readonly) double paramC;
@property (nonatomic, readonly) double paramQ;
@property (nonatomic, readonly) double paramR;

+ (id)bluetoothRSSIConfiguration;
+ (id)defaultConfiguration;

- (id)initWithParamR:(double)arg1 paramQ:(double)arg2 paramA:(double)arg3 paramB:(double)arg4 paramC:(double)arg5;
- (double)paramA;
- (double)paramB;
- (double)paramC;
- (double)paramQ;
- (double)paramR;

@end
