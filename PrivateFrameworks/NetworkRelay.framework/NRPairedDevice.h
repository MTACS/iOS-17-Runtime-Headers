
@interface NRPairedDevice : NSObject <NSCopying, NSSecureCoding> {
    NRDevicePairingTarget * _device;
    NRDeviceIdentifier * _nrDeviceIdentifier;
}

@property (nonatomic, retain) NRDevicePairingTarget *device;
@property (nonatomic, copy) NRDeviceIdentifier *nrDeviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nrDeviceIdentifier;
- (void)setDevice:(id)arg1;
- (void)setNrDeviceIdentifier:(id)arg1;

@end
