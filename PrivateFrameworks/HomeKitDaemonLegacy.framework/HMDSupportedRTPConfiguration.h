
@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSArray * _srtpCryptoSuites;
}

@property (nonatomic, readonly, copy) NSArray *srtpCryptoSuites;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCryptoSuites:(id)arg1;
- (id)srtpCryptoSuites;
- (id)tlvData;

@end
