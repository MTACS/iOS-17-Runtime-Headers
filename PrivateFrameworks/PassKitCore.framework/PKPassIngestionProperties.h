
@interface PKPassIngestionProperties : NSObject <NSSecureCoding> {
    bool  _hasCustomizedSettings;
    PKPassProvisioningMetadata * _provisioningMetadata;
    unsigned long long  _settings;
}

@property (nonatomic) bool hasCustomizedSettings;
@property (nonatomic, retain) PKPassProvisioningMetadata *provisioningMetadata;
@property (nonatomic) unsigned long long settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCustomizedSettings;
- (id)initWithCoder:(id)arg1;
- (id)provisioningMetadata;
- (void)setHasCustomizedSettings:(bool)arg1;
- (void)setProvisioningMetadata:(id)arg1;
- (void)setSettings:(unsigned long long)arg1;
- (unsigned long long)settings;

@end
