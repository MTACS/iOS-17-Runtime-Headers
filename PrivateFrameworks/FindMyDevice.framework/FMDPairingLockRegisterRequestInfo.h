
@interface FMDPairingLockRegisterRequestInfo : NSObject <NSSecureCoding> {
    NSString * _accessoryType;
    NSString * _lostModePublicKey;
    NSString * _serialNumber;
}

@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, retain) NSString *lostModePublicKey;
@property (nonatomic, retain) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lostModePublicKey;
- (id)serialNumber;
- (void)setAccessoryType:(id)arg1;
- (void)setLostModePublicKey:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
