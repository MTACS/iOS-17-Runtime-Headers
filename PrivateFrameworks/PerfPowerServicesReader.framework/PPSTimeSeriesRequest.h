
@interface PPSTimeSeriesRequest : PPSDataRequest <NSSecureCoding> {
    unsigned long long  _limitCount;
    unsigned long long  _offsetCount;
    unsigned long long  _readDirection;
}

@property (readonly) unsigned long long limitCount;
@property (readonly) unsigned long long offsetCount;
@property (readonly) unsigned long long readDirection;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3;
- (id)initWithMetrics:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3 limitCount:(unsigned long long)arg4 offsetCount:(unsigned long long)arg5;
- (id)initWithMetrics:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3 limitCount:(unsigned long long)arg4 offsetCount:(unsigned long long)arg5 readDirection:(unsigned long long)arg6;
- (unsigned long long)limitCount;
- (unsigned long long)offsetCount;
- (unsigned long long)readDirection;

@end
