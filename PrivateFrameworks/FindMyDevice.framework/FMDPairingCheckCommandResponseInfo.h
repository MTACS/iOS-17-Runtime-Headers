
@interface FMDPairingCheckCommandResponseInfo : NSObject <NSSecureCoding> {
    NSString * _lostModeInfo;
    NSString * _phoneNumber;
    NSString * _serverNonce;
    NSString * _signature;
    NSString * _statusCode;
    NSString * _useEraseKeyType;
}

@property (nonatomic, retain) NSString *lostModeInfo;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *serverNonce;
@property (nonatomic, retain) NSString *signature;
@property (nonatomic, retain) NSString *statusCode;
@property (nonatomic, retain) NSString *useEraseKeyType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lostModeInfo;
- (id)phoneNumber;
- (id)serverNonce;
- (void)setLostModeInfo:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setServerNonce:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setUseEraseKeyType:(id)arg1;
- (id)signature;
- (id)statusCode;
- (id)useEraseKeyType;

@end
