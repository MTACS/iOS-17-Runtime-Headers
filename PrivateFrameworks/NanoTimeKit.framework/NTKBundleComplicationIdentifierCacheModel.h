
@interface NTKBundleComplicationIdentifierCacheModel : NSObject <NSSecureCoding> {
    NSString * _buildVersion;
    NSDictionary * _dataSourceToBundleIdentifier;
    NSDictionary * _legacyComplicationTypeToDataSourceIdentifier;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSDictionary *dataSourceToBundleIdentifier;
@property (nonatomic, copy) NSDictionary *legacyComplicationTypeToDataSourceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)dataSourceToBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBuildVersion:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)legacyComplicationTypeToDataSourceIdentifier;
- (void)setDataSourceToBundleIdentifier:(id)arg1;
- (void)setLegacyComplicationTypeToDataSourceIdentifier:(id)arg1;

@end
