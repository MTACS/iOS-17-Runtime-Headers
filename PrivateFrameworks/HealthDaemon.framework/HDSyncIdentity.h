
@interface HDSyncIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _databaseIdentifier;
    NSUUID * _hardwareIdentifier;
    NSString * _instanceDiscriminator;
}

@property (nonatomic, readonly, copy) NSUUID *databaseIdentifier;
@property (nonatomic, readonly, copy) NSUUID *hardwareIdentifier;
@property (nonatomic, readonly, copy) NSString *instanceDiscriminator;

+ (id)legacySyncIdentity;
+ (bool)supportsSecureCoding;
+ (id)syncIdentityWithCodable:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)codableSyncIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHardwareIdentifier:(id)arg1 databaseIdentifier:(id)arg2 instanceDiscriminator:(id)arg3;
- (id)instanceDiscriminator;
- (bool)isEqual:(id)arg1;

@end
