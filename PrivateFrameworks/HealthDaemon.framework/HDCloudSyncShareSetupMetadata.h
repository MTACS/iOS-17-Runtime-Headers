
@interface HDCloudSyncShareSetupMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _invitationTokensByShareURL;
    NSString * _ownerCloudKitEmailAddress;
    HKProfileIdentifier * _profileIdentifier;
    CKShareParticipant * _shareParticipant;
    NSArray * _shareURLs;
    NSString * _syncCircleIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *invitationTokensByShareURL;
@property (nonatomic, readonly, copy) NSString *ownerCloudKitEmailAddress;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly, copy) CKShareParticipant *shareParticipant;
@property (nonatomic, readonly, copy) NSArray *shareURLs;
@property (nonatomic, readonly, copy) NSString *syncCircleIdentifier;

+ (id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codableSharingSetupMetadataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyncCircleIdentifier:(id)arg1 profileIdentifier:(id)arg2 shareURLs:(id)arg3 ownerCloudKitEmailAddress:(id)arg4 shareParticipant:(id)arg5 invitationTokensByShareURL:(id)arg6;
- (id)invitationTokensByShareURL;
- (bool)isEqual:(id)arg1;
- (id)ownerCloudKitEmailAddress;
- (id)profileIdentifier;
- (id)shareParticipant;
- (id)shareURLs;
- (id)syncCircleIdentifier;

@end
