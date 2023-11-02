
@interface STSNDEFRecord : NSObject <NSSecureCoding> {
    unsigned char  _firstOctet;
    NSData * _identifier;
    NSData * _payload;
    NSData * _type;
}

@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (bool)_parseNDEFData:(id)arg1 outRecords:(id)arg2;
+ (id)ndefRecordsWithData:(id)arg1;
+ (id)recordsWithTNF:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5 outError:(unsigned long long*)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_idLengthPresent;
- (void)_setIdLengthPresent:(bool)arg1;
- (bool)chunked;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getAuxiliaryDataReferencesFromAlternativeCarrierRecord;
- (id)getCarrierDataReferenceFromAlternativeCarrierRecord;
- (unsigned long long)getCarrierPowerStateFromAlternativeCarrierRecord;
- (unsigned char)header;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (bool)isAlternativeCarrierRecord;
- (bool)isBluetoothLEConfigurationRecord;
- (bool)isCollisionResolutionRecord;
- (bool)isEqual:(id)arg1;
- (bool)isHandoverRequestRecord;
- (bool)isHandoverSelectErrorRecord;
- (bool)isHandoverSelectRecord;
- (bool)isISO18013DeviceEngagementRecord;
- (bool)isISO18013ReaderEngagementRecord;
- (bool)isNfcConfigurationRecord;
- (bool)isWiFiAwareConfigurationRecord;
- (bool)messageBegin;
- (bool)messageEnd;
- (id)payload;
- (void)setChunked:(bool)arg1;
- (void)setHeader:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageBegin:(bool)arg1;
- (void)setMessageEnd:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setShortRecord:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (bool)shortRecord;
- (id)type;
- (unsigned char)typeNameFormat;

@end
