
@interface UARPManifestProperties : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _boardID;
    NSNumber * _chipEpoch;
    unsigned int  _chipID;
    NSNumber * _ecID;
    bool  _effectiveProductionMode;
    bool  _effectiveSecurityMode;
    NSNumber * _enableMixMatch;
    NSData * _nonce;
    bool  _productionMode;
    unsigned long long  _securityDomain;
    bool  _securityMode;
    bool  _supportsImg4;
}

@property (readonly) unsigned int boardID;
@property (retain) NSNumber *chipEpoch;
@property (readonly) unsigned int chipID;
@property (retain) NSNumber *ecID;
@property bool effectiveProductionMode;
@property bool effectiveSecurityMode;
@property (retain) NSNumber *enableMixMatch;
@property (copy) NSData *nonce;
@property (readonly) bool productionMode;
@property (readonly) unsigned long long securityDomain;
@property (readonly) bool securityMode;
@property bool supportsImg4;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)boardID;
- (id)chipEpoch;
- (unsigned int)chipID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)ecID;
- (bool)effectiveProductionMode;
- (bool)effectiveSecurityMode;
- (id)enableMixMatch;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBoardID:(unsigned int)arg1 chipID:(unsigned int)arg2 securityDomain:(unsigned long long)arg3 securityMode:(bool)arg4 productionMode:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nonce;
- (bool)productionMode;
- (unsigned long long)securityDomain;
- (const char *)securityDomainString;
- (bool)securityMode;
- (void)setChipEpoch:(id)arg1;
- (void)setEcID:(id)arg1;
- (void)setEffectiveProductionMode:(bool)arg1;
- (void)setEffectiveSecurityMode:(bool)arg1;
- (void)setEnableMixMatch:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setSupportsImg4:(bool)arg1;
- (bool)supportsImg4;

@end
