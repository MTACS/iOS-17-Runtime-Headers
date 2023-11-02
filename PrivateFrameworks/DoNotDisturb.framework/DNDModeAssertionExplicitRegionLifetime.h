
@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime {
    CLCircularRegion * _region;
}

@property (nonatomic, readonly, copy) CLCircularRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)region;

@end
