
@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    unsigned long long  _macAddress;
    NSNumber * _major;
    NSNumber * _minor;
}

@property (readonly, copy) NSUUID *UUID;
@property unsigned long long macAddress;
@property (readonly) NSNumber *major;
@property (readonly) NSNumber *minor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;
- (unsigned long long)macAddress;
- (id)major;
- (id)minor;
- (void)setMacAddress:(unsigned long long)arg1;

@end
