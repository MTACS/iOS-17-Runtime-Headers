
@interface NRDevicePairingCandidate : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _cbUUID;
    NSString * _name;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSUUID *cbUUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cbUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setCbUUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
