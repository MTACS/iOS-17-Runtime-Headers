
@interface FMDPairingLockUpdateRequestInfo : NSObject <NSSecureCoding> {
    NSString * _lostModePubKey;
    NSString * _pairingCheckToken;
    NSString * _serialNumber;
    NSString * _timeStamp;
    NSString * _userPrivateKey;
}

@property (nonatomic, retain) NSString *lostModePubKey;
@property (nonatomic, retain) NSString *pairingCheckToken;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSString *timeStamp;
@property (nonatomic, retain) NSString *userPrivateKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lostModePubKey;
- (id)pairingCheckToken;
- (id)serialNumber;
- (void)setLostModePubKey:(id)arg1;
- (void)setPairingCheckToken:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (void)setUserPrivateKey:(id)arg1;
- (id)timeStamp;
- (id)userPrivateKey;

@end
