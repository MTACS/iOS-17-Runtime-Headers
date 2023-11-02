
@interface UARPPayloadPersonalizationInfo : NSObject {
    NSNumber * _boardID;
    NSNumber * _chipID;
    NSNumber * _ecID;
    NSString * _keyManifest;
    NSData * _manifest;
    NSData * _nonce;
    NSData * _personalizedData;
    NSData * _personalizedMetaData;
    NSNumber * _productionMode;
    NSNumber * _securityDomain;
    NSNumber * _securityMode;
    NSMutableArray * _trimmedTlvs;
    NSDictionary * _tssOptions;
    unsigned long long  _unitNumber;
}

@property (retain) NSNumber *boardID;
@property (retain) NSNumber *chipID;
@property (retain) NSNumber *ecID;
@property (retain) NSString *keyManifest;
@property (retain) NSData *manifest;
@property (retain) NSData *nonce;
@property (retain) NSData *personalizedData;
@property (retain) NSData *personalizedMetaData;
@property (retain) NSNumber *productionMode;
@property (retain) NSNumber *securityDomain;
@property (retain) NSNumber *securityMode;
@property (retain) NSMutableArray *trimmedTlvs;
@property (retain) NSDictionary *tssOptions;
@property unsigned long long unitNumber;

- (void).cxx_destruct;
- (id)boardID;
- (id)chipID;
- (id)ecID;
- (id)keyManifest;
- (id)manifest;
- (id)nonce;
- (id)personalizedData;
- (id)personalizedMetaData;
- (id)productionMode;
- (id)securityDomain;
- (id)securityMode;
- (void)setBoardID:(id)arg1;
- (void)setChipID:(id)arg1;
- (void)setEcID:(id)arg1;
- (void)setKeyManifest:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPersonalizedData:(id)arg1;
- (void)setPersonalizedMetaData:(id)arg1;
- (void)setProductionMode:(id)arg1;
- (void)setSecurityDomain:(id)arg1;
- (void)setSecurityMode:(id)arg1;
- (void)setTrimmedTlvs:(id)arg1;
- (void)setTssOptions:(id)arg1;
- (void)setUnitNumber:(unsigned long long)arg1;
- (id)trimmedTlvs;
- (id)tssOptions;
- (unsigned long long)unitNumber;

@end
