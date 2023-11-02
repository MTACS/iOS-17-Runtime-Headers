
@interface ATXDateRelevantContext : NSObject <ATXRelevantContext> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;

@end
