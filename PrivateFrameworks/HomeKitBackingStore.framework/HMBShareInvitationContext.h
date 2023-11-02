
@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding> {
    CKUserIdentityLookupInfo * _lookupInfo;
    NSUUID * _participantClientIdentifier;
    bool  _shouldGrantWriteAccess;
}

@property (readonly) CKUserIdentityLookupInfo *lookupInfo;
@property (readonly, copy) NSUUID *participantClientIdentifier;
@property bool shouldGrantWriteAccess;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lookupInfo;
- (id)participantClientIdentifier;
- (void)setShouldGrantWriteAccess:(bool)arg1;
- (bool)shouldGrantWriteAccess;

@end
