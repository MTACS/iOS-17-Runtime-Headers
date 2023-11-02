
@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSDate * _fireDate;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, readonly) NSDate *fireDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFireDate:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
