
@interface _CDDateRange : NSObject <_CDDateRangeProtocol> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly) double duration;
@property (readonly) NSDate *endDate;
@property (readonly) NSDate *startDate;

+ (id)periodWithEnd:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 end:(id)arg2;

- (void).cxx_destruct;
- (bool)contains:(id)arg1;
- (id)description;
- (double)duration;
- (id)endDate;
- (id)initWithStart:(id)arg1 andEnd:(id)arg2;
- (id)startDate;

@end
