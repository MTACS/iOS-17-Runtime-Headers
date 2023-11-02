
@interface PFDayOfWeekSchedule : NSObject <PFOperationSchedule> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void dayOfWeek;
}

+ (id)firstDayOfWeek;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDayOfWeek:(long long)arg1 calendar:(id)arg2;
- (bool)shouldExecuteOn:(id)arg1 previousExecution:(id)arg2;

@end
