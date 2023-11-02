
@interface _HKRateLimiterOperationRecord : NSObject {
    unsigned long long  _cost;
    NSDate * _datePerformed;
}

@property (readonly) unsigned long long cost;
@property (readonly, copy) NSDate *datePerformed;

- (void).cxx_destruct;
- (unsigned long long)cost;
- (id)datePerformed;

@end
