
@interface PPScoredEvent : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    double  _score;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 score:(double)arg4;
- (double)score;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;

@end
