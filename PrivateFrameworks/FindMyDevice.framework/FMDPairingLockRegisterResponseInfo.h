
@interface FMDPairingLockRegisterResponseInfo : NSObject <NSSecureCoding> {
    NSString * _pairingToken;
    NSString * _serialNumber;
}

@property (nonatomic, retain) NSString *pairingToken;
@property (nonatomic, retain) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pairingToken;
- (id)serialNumber;
- (void)setPairingToken:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
