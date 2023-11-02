
@interface PKTransactionReleasedDataApplication : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _client;
    NSString * _usageDescription;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long client;
@property (nonatomic, retain) NSString *usageDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned long long)client;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReleasedDataApplication:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClient:(unsigned long long)arg1;
- (void)setUsageDescription:(id)arg1;
- (id)usageDescription;

@end
