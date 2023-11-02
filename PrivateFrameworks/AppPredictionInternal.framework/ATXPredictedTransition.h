
@interface ATXPredictedTransition : NSObject {
    NSDate * _date;
    ATXLocationOfInterest * _loi;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) ATXLocationOfInterest *loi;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)init;
- (id)initWithDate:(id)arg1 loi:(id)arg2;
- (id)loi;
- (id)transitionArrayForDate:(id)arg1;

@end
