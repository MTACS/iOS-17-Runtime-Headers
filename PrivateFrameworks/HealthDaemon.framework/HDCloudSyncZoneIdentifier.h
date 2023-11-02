
@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    long long  _scope;
    long long  _type;
    CKRecordZoneID * _zoneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneIdentifier;

+ (id)identifierForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initForZone:(id)arg1 container:(id)arg2;
- (id)initForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentIgnoringOwnerToZone:(id)arg1;
- (bool)isEquivalentIgnoringOwnerToZone:(id)arg1 container:(id)arg2;
- (bool)isEquivalentToZone:(id)arg1 container:(id)arg2;
- (long long)scope;
- (long long)type;
- (id)zoneIdentifier;

@end
