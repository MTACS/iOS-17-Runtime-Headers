
@interface ENRegionServerExposureConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appBundleIdentifier;
    NSArray * _classificationCriteria;
    bool  _enableRecursiveReportType;
    NSDictionary * _exposureConfigurationValues;
    bool  _matchingRestrictedToRegion;
    double  _privacyParameterInputCandenceInterval;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *classificationCriteria;
@property (nonatomic, readonly) bool enableRecursiveReportType;
@property (nonatomic, readonly, copy) NSDictionary *exposureConfigurationValues;
@property (nonatomic, readonly) bool matchingRestrictedToRegion;
@property (nonatomic, readonly) double privacyParameterInputCandenceInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)classificationCriteria;
- (id)classificationCriteriaForName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableRecursiveReportType;
- (void)encodeWithCoder:(id)arg1;
- (id)exposureConfigurationValues;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;
- (bool)matchingRestrictedToRegion;
- (double)privacyParameterInputCandenceInterval;

@end
