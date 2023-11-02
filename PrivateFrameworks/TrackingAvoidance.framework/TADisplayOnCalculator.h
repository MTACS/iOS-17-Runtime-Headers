
@interface TADisplayOnCalculator : NSObject <NSSecureCoding> {
    double  _budgetRemaining;
    NSDate * _evaluatedUntil;
    NSDate * _startTime;
    bool  _useBudget;
}

@property (nonatomic) double budgetRemaining;
@property (nonatomic, readonly) NSDate *evaluatedUntil;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) bool useBudget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)budgetRemaining;
- (double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3;
- (void)completeDisplayOnWithEndDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluatedUntil;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1;
- (id)initWithStartTime:(id)arg1 budget:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBudgetRemaining:(double)arg1;
- (void)setStartTime:(id)arg1;
- (void)setUseBudget:(bool)arg1;
- (id)startTime;
- (bool)useBudget;

@end
