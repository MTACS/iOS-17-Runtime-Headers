
@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    float  _percentLikely;
    float  _percentUnlikely;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) float percentLikely;
@property (nonatomic, readonly) float percentUnlikely;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x1; double x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; }*)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4;
- (float)percentLikely;
- (float)percentUnlikely;
- (id)startDate;

@end
