
@interface HDContributorReference : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    long long  _contributorType;
    NSNumber * _persistentID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) long long contributorType;
@property (nonatomic, readonly, copy) NSNumber *persistentID;

+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForOtherUserWithUUID:(id)arg1;
+ (id)contributorReferenceForPersistentID:(id)arg1;
+ (id)contributorReferenceForPrimaryUser;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (long long)contributorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistentID;

@end
