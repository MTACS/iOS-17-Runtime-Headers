
@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    float  _percentMild;
    float  _percentModerate;
    float  _percentNone;
    float  _percentSlight;
    float  _percentStrong;
    float  _percentUnknown;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) float percentMild;
@property (nonatomic, readonly) float percentModerate;
@property (nonatomic, readonly) float percentNone;
@property (nonatomic, readonly) float percentSlight;
@property (nonatomic, readonly) float percentStrong;
@property (nonatomic, readonly) float percentUnknown;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; }*)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentUnknown:(float)arg3 percentNone:(float)arg4 percentSlight:(float)arg5 percentMild:(float)arg6 percentModerate:(float)arg7 percentStrong:(float)arg8;
- (float)percentMild;
- (float)percentModerate;
- (float)percentNone;
- (float)percentSlight;
- (float)percentStrong;
- (float)percentUnknown;
- (id)startDate;

@end
