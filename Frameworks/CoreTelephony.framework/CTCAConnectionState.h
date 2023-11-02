
@interface CTCAConnectionState : NSObject <NSCopying, NSSecureCoding> {
    long long  _congestionStatus;
    long long  _connectionStatus;
    CTCATransmissionProgress * _currentTransmissionProgress;
    long long  _registrationStatus;
    NSNumber * _rssi;
    long long  _syncStatus;
}

@property (nonatomic) long long congestionStatus;
@property (nonatomic) long long connectionStatus;
@property (nonatomic, retain) CTCATransmissionProgress *currentTransmissionProgress;
@property (nonatomic) long long registrationStatus;
@property (nonatomic, retain) NSNumber *rssi;
@property (nonatomic) long long syncStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)congestionStatus;
- (long long)connectionStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTransmissionProgress;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)registrationStatus;
- (id)rssi;
- (void)setCongestionStatus:(long long)arg1;
- (void)setConnectionStatus:(long long)arg1;
- (void)setCurrentTransmissionProgress:(id)arg1;
- (void)setRegistrationStatus:(long long)arg1;
- (void)setRssi:(id)arg1;
- (void)setSyncStatus:(long long)arg1;
- (long long)syncStatus;

@end
