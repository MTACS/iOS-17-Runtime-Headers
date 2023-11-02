
@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {
    _DKHistogram * _endHistogram;
    NSDate * _startDate;
    _DKHistogram * _startHistogram;
    NSArray * _transitionDates;
    NSArray * _values;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) _DKHistogram *endHistogram;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) _DKHistogram *startHistogram;
@property (nonatomic, readonly) NSArray *transitionDates;

+ (id)predictionUnavailable;
+ (bool)supportsSecureCoding;
+ (id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
+ (id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)endHistogram;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUnavailable;
- (id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (void)setEndHistogram:(id)arg1;
- (void)setStartHistogram:(id)arg1;
- (id)startDate;
- (id)startHistogram;
- (id)transitionDates;
- (id)valueAtDate:(id)arg1;

@end
