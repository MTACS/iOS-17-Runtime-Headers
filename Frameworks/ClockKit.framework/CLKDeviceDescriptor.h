
@interface CLKDeviceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _nrDeviceUUID;
}

@property (nonatomic, readonly) NSUUID *nrDeviceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNRDevice:(id)arg1;
- (id)initWithNRDeviceUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nrDeviceUUID;

@end
