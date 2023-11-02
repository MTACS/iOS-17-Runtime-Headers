
@interface MBSystemDomainsVersions : NSObject {
    double  _maxSupportedVersion;
    double  _minSupportedVersion;
    double  _version;
}

@property (nonatomic) double maxSupportedVersion;
@property (nonatomic) double minSupportedVersion;
@property (nonatomic) double version;

- (id)init;
- (id)initWithDefaultSystemDomainsPlist;
- (id)initWithVersion:(double)arg1 minSupportedVersion:(double)arg2 maxSupportedVersion:(double)arg3;
- (double)maxSupportedVersion;
- (double)minSupportedVersion;
- (void)setMaxSupportedVersion:(double)arg1;
- (void)setMinSupportedVersion:(double)arg1;
- (void)setVersion:(double)arg1;
- (double)version;

@end
