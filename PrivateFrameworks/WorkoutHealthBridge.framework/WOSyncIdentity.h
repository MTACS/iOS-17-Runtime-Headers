
@interface WOSyncIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _databaseIdentifier;
    NSUUID * _hardwareIdentifier;
    NSString * _instanceDiscriminator;
}

@property (nonatomic, readonly, copy) NSUUID *databaseIdentifier;
@property (nonatomic, readonly, copy) NSUUID *hardwareIdentifier;
@property (nonatomic, readonly, copy) NSString *instanceDiscriminator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHardwareIdentifier:(id)arg1 databaseIdentifier:(id)arg2 instanceDiscriminator:(id)arg3;
- (id)instanceDiscriminator;
- (bool)isEqual:(id)arg1;

@end
