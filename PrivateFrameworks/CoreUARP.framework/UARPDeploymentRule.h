
@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _countryList;
    NSString * _currentISOCountryCode;
    NSNumber * _deploymentDay;
    NSNumber * _deploymentLimit;
    NSNumber * _deploymentPercent;
    NSDate * _goLiveDate;
    NSObject<OS_os_log> * _log;
    NSNumber * _rampPeriod;
    NSString * _serialNumber;
    NSString * _testSerialNumber;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createSerialNumber;
- (id)deploymentDay;
- (id)deploymentPercent;
- (id)description;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isDeploymentAllowed:(id*)arg1;
- (bool)isDeploymentAllowedPerCountryList;
- (bool)isDeploymentAllowedPerDeploymentLimit;
- (bool)isDeploymentAllowedPerGoLiveDate;
- (bool)isDeploymentAllowedPerRampPeriod;
- (void)setDeploymentDay:(id)arg1;
- (void)setDeploymentPercent:(id)arg1;
- (void)setTestSerialNumber:(id)arg1;
- (id)testSerialNumber;

@end
