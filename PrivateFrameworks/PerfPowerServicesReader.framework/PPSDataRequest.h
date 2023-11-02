
@interface PPSDataRequest : NSObject <NSSecureCoding> {
    NSSet * _metrics;
    NSPredicate * _predicate;
    long long  _requestType;
    NSDateInterval * _timeFilter;
}

@property (readonly, copy) NSString *category;
@property (readonly, copy) NSSet *metrics;
@property (readonly) NSPredicate *predicate;
@property (readonly) long long requestType;
@property (readonly, copy) NSString *subsystem;
@property (readonly) NSDateInterval *timeFilter;
@property (readonly) NSPredicate *valueFilter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestType:(long long)arg1 metrics:(id)arg2 predicate:(id)arg3 timeFilter:(id)arg4;
- (id)metrics;
- (id)predicate;
- (long long)requestType;
- (id)subsystem;
- (id)timeFilter;
- (id)valueFilter;

@end
