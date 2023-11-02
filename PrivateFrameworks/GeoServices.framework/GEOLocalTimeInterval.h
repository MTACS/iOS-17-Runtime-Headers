
@interface GEOLocalTimeInterval : NSObject <NSSecureCoding> {
    double  _endTime;
    double  _startTime;
}

@property (nonatomic) double endTime;
@property (nonatomic) double startTime;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
