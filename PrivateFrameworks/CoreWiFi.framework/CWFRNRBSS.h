
@interface CWFRNRBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSString * _BSSID;
    unsigned long long  _TBTTOffset;
    bool  _UPRActive;
    CWFChannel * _channel;
    bool  _colocatedAP;
    bool  _multiband6GHz;
    bool  _multipleBSSID;
    unsigned long long  _primary20MHzPSD;
    bool  _sameSSID;
    unsigned long long  _shortSSID;
    bool  _transmittedBSSID;
}

@property (nonatomic, copy) NSString *BSSID;
@property (nonatomic) unsigned long long TBTTOffset;
@property (getter=isUPRActive, nonatomic) bool UPRActive;
@property (nonatomic, copy) CWFChannel *channel;
@property (getter=isColocatedAP, nonatomic) bool colocatedAP;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMultiband6GHz, nonatomic) bool multiband6GHz;
@property (getter=isMultipleBSSID, nonatomic) bool multipleBSSID;
@property (nonatomic) unsigned long long primary20MHzPSD;
@property (getter=isSameSSID, nonatomic) bool sameSSID;
@property (nonatomic) unsigned long long shortSSID;
@property (readonly) Class superclass;
@property (getter=isTransmittedBSSID, nonatomic) bool transmittedBSSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BSSID;
- (id)JSONCompatibleKeyValueMap;
- (unsigned long long)TBTTOffset;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isColocatedAP;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRNRBSS:(id)arg1;
- (bool)isMultiband6GHz;
- (bool)isMultipleBSSID;
- (bool)isSameSSID;
- (bool)isTransmittedBSSID;
- (bool)isUPRActive;
- (unsigned long long)primary20MHzPSD;
- (void)setBSSID:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setColocatedAP:(bool)arg1;
- (void)setMultiband6GHz:(bool)arg1;
- (void)setMultipleBSSID:(bool)arg1;
- (void)setPrimary20MHzPSD:(unsigned long long)arg1;
- (void)setSameSSID:(bool)arg1;
- (void)setShortSSID:(unsigned long long)arg1;
- (void)setTBTTOffset:(unsigned long long)arg1;
- (void)setTransmittedBSSID:(bool)arg1;
- (void)setUPRActive:(bool)arg1;
- (unsigned long long)shortSSID;

@end
