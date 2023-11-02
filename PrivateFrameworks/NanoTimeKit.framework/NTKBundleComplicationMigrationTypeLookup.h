
@interface NTKBundleComplicationMigrationTypeLookup : NSObject <NSSecureCoding> {
    NSString * _buildVersion;
    NSDictionary * _dictionary;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSDictionary *dictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDictionary:(id)arg1;

@end
