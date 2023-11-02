
@interface HKSharingRecipientIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clinicalAccountIdentifier;
    NSUUID * _invitationUUID;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *clinicalAccountIdentifier;
@property (nonatomic, readonly, copy) NSUUID *invitationUUID;
@property (nonatomic, readonly) unsigned long long type;

+ (id)sharingRecipientIdentifierFromStringRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRecipientIdentifierType:(unsigned long long)arg1 invitationUUID:(id)arg2 clinicalAccountIdentifier:(id)arg3;
- (id)clinicalAccountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initForClinicalAccountIdentifier:(id)arg1;
- (id)initForInvitationUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invitationUUID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
