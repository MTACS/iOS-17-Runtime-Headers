
@interface ATXFreeMoment : NSObject <NSSecureCoding> {
    NSDateInterval * _dateRange;
    double  _score;
}

@property (nonatomic, readonly) NSDateInterval *dateRange;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateRange:(id)arg1 score:(double)arg2;
- (double)score;

@end
