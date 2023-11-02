
@interface STSCHWiFiAwareAlternativeCarrier : STSCHAlternativeCarrier {
    STSCHWiFiAwareDiscoveryChannelInfo * _discoveryChannelInfo;
    STSCHWiFiAwareSecurityInfo * _securityInfo;
    NSData * _serviceIdentifier;
}

@property (nonatomic, retain) STSCHWiFiAwareDiscoveryChannelInfo *discoveryChannelInfo;
@property (nonatomic, retain) STSCHWiFiAwareSecurityInfo *securityInfo;
@property (nonatomic, retain) NSData *serviceIdentifier;

+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCarrierConfigurationRecord;
- (void)_initWithCarrierConfiguration:(id)arg1;
- (id)description;
- (id)discoveryChannelInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNdefRecordBundle:(id)arg1;
- (id)initWithSecurityInfo:(id)arg1 discoveryChannelInfo:(id)arg2 powerState:(unsigned long long)arg3 auxiliaryRecords:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)securityInfo;
- (id)serviceIdentifier;
- (void)setDiscoveryChannelInfo:(id)arg1;
- (void)setSecurityInfo:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end
