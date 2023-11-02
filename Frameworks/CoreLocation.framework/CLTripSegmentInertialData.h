
@interface CLTripSegmentInertialData : NSObject <NSCopying, NSSecureCoding> {
    double  _dataPeriod_s;
    double  _deltaCourseSpeedCovar_radmps;
    double  _deltaCourseVar_rad2;
    double  _deltaCourse_rad;
    double  _deltaSpeedVar_mps2;
    double  _deltaSpeed_mps;
    NSDate * _timestamp;
}

@property (nonatomic) double dataPeriod_s;
@property (nonatomic) double deltaCourseSpeedCovar_radmps;
@property (nonatomic) double deltaCourseVar_rad2;
@property (nonatomic) double deltaCourse_rad;
@property (nonatomic) double deltaSpeedVar_mps2;
@property (nonatomic) double deltaSpeed_mps;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dataPeriod_s;
- (void)dealloc;
- (double)deltaCourseSpeedCovar_radmps;
- (double)deltaCourseVar_rad2;
- (double)deltaCourse_rad;
- (double)deltaSpeedVar_mps2;
- (double)deltaSpeed_mps;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime:(id)arg1 dataPeriodSec:(double)arg2 deltaCourseRad:(double)arg3 deltaSpeedMps:(double)arg4 deltaCourseVarRad2:(double)arg5 deltaSpeedVarMps2:(double)arg6 deltaCourseSpeedCovarRadMps:(double)arg7;
- (bool)isValid;
- (void)setDataPeriod_s:(double)arg1;
- (void)setDeltaCourseSpeedCovar_radmps:(double)arg1;
- (void)setDeltaCourseVar_rad2:(double)arg1;
- (void)setDeltaCourse_rad:(double)arg1;
- (void)setDeltaSpeedVar_mps2:(double)arg1;
- (void)setDeltaSpeed_mps:(double)arg1;
- (id)timestamp;

@end
