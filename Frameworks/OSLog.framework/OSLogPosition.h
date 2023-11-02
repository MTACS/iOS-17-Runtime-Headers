
@interface OSLogPosition : NSObject {
    NSDate * _date;
    double  _offset;
    long long  _precision;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) long long precision;

- (void).cxx_destruct;
- (id)date;
- (id)initWithDate:(id)arg1;
- (id)initWithEventSource:(id)arg1 timeIntervalSinceEnd:(double)arg2;
- (id)initWithTimeIntervalSinceLatestBoot:(double)arg1;
- (double)offset;
- (long long)precision;

@end
