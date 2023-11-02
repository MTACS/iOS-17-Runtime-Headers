
@interface PKCloudStoreZone : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerName;
    NSString * _ownerName;
    long long  _scope;
    NSSet * _shareParticipants;
    NSString * _zoneName;
    NSString * _zoneSubscriptionIdentifier;
}

@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) NSString *ownerName;
@property (nonatomic) long long scope;
@property (nonatomic, copy) NSSet *shareParticipants;
@property (nonatomic, copy) NSString *zoneName;
@property (nonatomic, retain) NSString *zoneSubscriptionIdentifier;

+ (bool)supportsSecureCoding;
+ (void)zoneValueForZoneName:(id)arg1 outZoneType:(unsigned long long*)arg2 outAccountIdentifier:(id*)arg3 altDSID:(id*)arg4;

- (void).cxx_destruct;
- (id)containerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 containerDatabase:(id)arg2;
- (id)initWithZoneID:(id)arg1 containerName:(id)arg2 scope:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)ownerName;
- (id)recordZone;
- (long long)scope;
- (void)setContainerName:(id)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setScope:(long long)arg1;
- (void)setShareParticipants:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)setZoneSubscriptionIdentifier:(id)arg1;
- (id)shareParticipantWithHandle:(id)arg1;
- (id)shareParticipantWithLookupInfo:(id)arg1;
- (id)shareParticipants;
- (id)zoneName;
- (id)zoneSubscription;
- (id)zoneSubscriptionIdentifier;
- (unsigned long long)zoneType;

@end
