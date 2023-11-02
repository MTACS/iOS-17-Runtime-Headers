
@interface UARPSuperBinaryPayload : NSObject {
    bool  _hostPersonalization;
    NSMutableArray * _measurements;
    NSData * _metaData;
    NSData * _payloadData;
    NSMutableArray * _personalizationList;
    bool  _prefixNeedsUnitNumber;
    bool  _suffixNeedsUnitNumber;
    UARPAssetTag * _tag;
    bool  _ticketNeedsUnitNumber;
    NSString * _ticketPrefix;
    NSMutableArray * _tlvs;
    NSArray * _tssRequests;
    UARPAssetVersion * _version;
}

@property (readonly) NSData *metaData;
@property (readonly) NSData *payloadData;
@property (readonly) UARPAssetTag *tag;
@property (readonly) NSArray *tlvs;
@property (readonly) NSArray *tssRequests;
@property (readonly) UARPAssetVersion *version;

- (void).cxx_destruct;
- (id)composeTSSRequest:(unsigned long long)arg1;
- (id)description;
- (bool)expandTLVs;
- (id)getMetaData;
- (id)getPayloadData;
- (id)getTag;
- (id)getTlvs;
- (id)getTssRequests;
- (id)getVersion;
- (id)initWithData:(id)arg1 metaData:(id)arg2 tag:(id)arg3 version:(id)arg4;
- (id)manifest:(unsigned long long)arg1;
- (id)metaData;
- (bool)needsHostPersonalization;
- (id)payloadData;
- (id)personalizationObject:(unsigned long long)arg1;
- (id)personalizedData:(unsigned long long)arg1;
- (id)personalizedMetaData:(unsigned long long)arg1;
- (void)processMeasurementsForTSSOptions:(id)arg1 info:(id)arg2;
- (void)processTLVsForPersonalization;
- (bool)queryTatsuSigningServer:(id)arg1 unitNumber:(unsigned long long)arg2 ssoOnly:(bool)arg3 error:(id*)arg4;
- (id)requiredTSSOptions;
- (id)tag;
- (id)tlvs;
- (id)tssKeyName:(id)arg1 unitNumber:(unsigned long long)arg2;
- (id)tssRequest:(unsigned long long)arg1;
- (id)tssRequests;
- (void)updateBoardID:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateChipID:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateECID:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateNonce:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateProductionMode:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateSecurityDomain:(id)arg1 unitNumber:(unsigned long long)arg2;
- (void)updateSecurityMode:(id)arg1 unitNumber:(unsigned long long)arg2;
- (id)version;

@end
