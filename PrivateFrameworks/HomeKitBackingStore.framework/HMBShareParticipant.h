
@interface HMBShareParticipant : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    CKShareParticipant * _ckShareParticipant;
    NSUUID * _clientIdentifier;
    HMBShareInvitation * _pendingInvitation;
}

@property (readonly, copy) CKShareParticipant *ckShareParticipant;
@property (readonly, copy) NSUUID *clientIdentifier;
@property (readonly, copy) HMBShareUserID *cloudShareID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasAccepted;
@property (readonly) bool hasWriteAccess;
@property (readonly) unsigned long long hash;
@property (copy) HMBShareInvitation *pendingInvitation;
@property (readonly) Class superclass;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)ckShareParticipant;
- (id)clientIdentifier;
- (id)cloudShareID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccepted;
- (bool)hasWriteAccess;
- (unsigned long long)hash;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithCKShareParticipant:(id)arg1 clientIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pendingInvitation;
- (void)setPendingInvitation:(id)arg1;

@end
