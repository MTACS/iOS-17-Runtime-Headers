
@interface NRDeviceIdentifier : NSObject <NSCopying, NSSecureCoding> {
    bool  _ephemeral;
    NSUUID * _nrDeviceIdentifier;
}

@property (nonatomic) bool ephemeral;
@property (nonatomic, copy) NSUUID *nrDeviceIdentifier;

+ (id)copyBestTestingDeviceIdentifier;
+ (id)newDeviceIdentifierWithBluetoothUUID:(id)arg1;
+ (id)newDeviceIdentifierWithIDSDeviceID:(id)arg1;
+ (id)newEphemeralDeviceIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ephemeral;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEphemeral;
- (bool)isEqual:(id)arg1;
- (id)nrDeviceIdentifier;
- (void)setEphemeral:(bool)arg1;
- (void)setNrDeviceIdentifier:(id)arg1;

@end
