
@interface CVAPRAngleMeasurement : NSObject {
    double  _measurement;
    double  _uncertainty;
}

@property (nonatomic) double measurement;
@property (nonatomic) double uncertainty;

- (double)measurement;
- (void)setMeasurement:(double)arg1;
- (void)setUncertainty:(double)arg1;
- (double)uncertainty;

@end
