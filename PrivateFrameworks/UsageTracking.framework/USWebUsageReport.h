
@interface USWebUsageReport : NSObject <NSSecureCoding> {
    NSString * _domainIdentifier;
    double  _totalUsageTime;
    NSDictionary * _webUsageByDomain;
    bool  _webUsageTrusted;
}

@property (readonly, copy) NSString *domainIdentifier;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;
@property (readonly) bool webUsageTrusted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 webUsageTrusted:(bool)arg2 totalUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3;
- (id)initWithDomainIdentifier:(id)arg1 webUsageTrusted:(bool)arg2 totalUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (double)totalUsageTime;
- (id)webUsageByDomain;
- (bool)webUsageTrusted;

@end
