
@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    long long  _restrictionType;
    unsigned long long  _version;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) long long restrictionType;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRestrictedZoneId:(id)arg1;
- (long long)restrictionType;
- (unsigned long long)version;

@end
