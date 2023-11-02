
@interface FMDPairingCheckCommandRequestInfo : NSObject <NSSecureCoding> {
    NSString * _accessoryType;
    NSString * _authNonce;
    NSString * _eraseKeyType;
    NSString * _pairingCheckToken;
}

@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, retain) NSString *authNonce;
@property (nonatomic, retain) NSString *eraseKeyType;
@property (nonatomic, retain) NSString *pairingCheckToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryType;
- (id)authNonce;
- (void)encodeWithCoder:(id)arg1;
- (id)eraseKeyType;
- (id)initWithCoder:(id)arg1;
- (id)pairingCheckToken;
- (void)setAccessoryType:(id)arg1;
- (void)setAuthNonce:(id)arg1;
- (void)setEraseKeyType:(id)arg1;
- (void)setPairingCheckToken:(id)arg1;

@end
