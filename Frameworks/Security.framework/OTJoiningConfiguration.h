
@interface OTJoiningConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _epoch;
    bool  _isInitiator;
    NSString * _pairingUUID;
    NSString * _protocolType;
    long long  _timeout;
    NSString * _uniqueClientID;
    NSString * _uniqueDeviceID;
}

@property (nonatomic) unsigned long long epoch;
@property (nonatomic) bool isInitiator;
@property (nonatomic, retain) NSString *pairingUUID;
@property (nonatomic, retain) NSString *protocolType;
@property long long timeout;
@property (nonatomic, retain) NSString *uniqueClientID;
@property (nonatomic, retain) NSString *uniqueDeviceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)epoch;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 epoch:(unsigned long long)arg5 isInitiator:(bool)arg6;
- (bool)isInitiator;
- (id)pairingUUID;
- (id)protocolType;
- (void)setEpoch:(unsigned long long)arg1;
- (void)setIsInitiator:(bool)arg1;
- (void)setPairingUUID:(id)arg1;
- (void)setProtocolType:(id)arg1;
- (void)setTimeout:(long long)arg1;
- (void)setUniqueClientID:(id)arg1;
- (void)setUniqueDeviceID:(id)arg1;
- (long long)timeout;
- (id)uniqueClientID;
- (id)uniqueDeviceID;

@end
