
@interface AATimedData : NSObject <AADataEventType> {
    void duration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)dataName;

- (void).cxx_destruct;
- (double)duration;
- (id)endDate;
- (id)init;
- (id)startDate;
- (id)toDict;

@end
