
@interface SUMDMScanOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    SUScanOptions * _scanOptions;
}

@property (nonatomic, readonly) unsigned long long MDMSoftwareUpdatePath;
@property (nonatomic, readonly) unsigned long long delayPeriodDays;
@property (nonatomic, readonly, retain) NSString *requestedProductMarketingVersion;
@property (nonatomic, retain) SUScanOptions *scanOptions;
@property (nonatomic, readonly) bool useDelayPeriod;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)MCPathToSUMDMPath:(long long)arg1;
- (unsigned long long)MDMSoftwareUpdatePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)delayPeriodDays;
- (bool)delayRestrictionEnabled;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScanOption:(id)arg1;
- (id)requestedProductMarketingVersion;
- (id)scanOptions;
- (void)setScanOptions:(id)arg1;
- (bool)useDelayPeriod;

@end
