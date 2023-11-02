
@interface ATXContext : NSObject <NSSecureCoding> {
    unsigned long long  _contextType;
    CLLocation * _location;
    NSDateInterval * _timeWindow;
}

@property (nonatomic, readonly) unsigned long long contextType;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSDateInterval *timeWindow;

+ (id)defaultTimeWindowForContextType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)contextType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextType:(unsigned long long)arg1 location:(id)arg2 timeWindow:(id)arg3;
- (id)location;
- (id)timeWindow;

@end
