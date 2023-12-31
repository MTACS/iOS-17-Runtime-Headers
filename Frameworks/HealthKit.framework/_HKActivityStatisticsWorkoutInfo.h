
@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding, _HKJSONObject> {
    NSDate * _endDate;
    HKSource * _source;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKSource *source;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonObject;
- (void)setEndDate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)source;
- (id)startDate;

@end
