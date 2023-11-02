
@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDSRTPCryptoSuite * _srtpCryptoSuite;
    NSData * _srtpMasterKey;
    NSData * _srtpMasterSalt;
}

@property (nonatomic, readonly, copy) HMDSRTPCryptoSuite *srtpCryptoSuite;
@property (nonatomic, readonly, copy) NSData *srtpMasterKey;
@property (nonatomic, readonly, copy) NSData *srtpMasterSalt;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (bool)compatibleWithRemoteEndPoint:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCryptoSuite:(id)arg1 masterKey:(id)arg2 masterSalt:(id)arg3;
- (id)srtpCryptoSuite;
- (id)srtpMasterKey;
- (id)srtpMasterSalt;
- (id)tlvData;

@end
