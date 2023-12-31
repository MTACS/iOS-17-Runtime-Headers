
@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {
    NSDate * _usageDate;
}

@property (nonatomic, readonly) NSDate *usageDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsageDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)usageDate;

@end
