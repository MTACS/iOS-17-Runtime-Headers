
@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding, _HKJSONObject> {
    long long  _state;
    double  _timeStamp;
}

@property (nonatomic) long long state;
@property (nonatomic) double timeStamp;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 state:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonObject;
- (void)setState:(long long)arg1;
- (void)setTimeStamp:(double)arg1;
- (long long)state;
- (double)timeStamp;

@end
