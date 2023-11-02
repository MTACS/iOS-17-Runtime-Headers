
@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding> {
    NSNumber * _mostRecentReachability;
}

@property (readonly, copy) NSNumber *mostRecentReachability;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMostRecentReachability:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mostRecentReachability;

@end
