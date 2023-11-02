
@interface PKCloudStoreZoneShareParticipant : NSObject <NSCopying, NSSecureCoding> {
    CKDeviceToDeviceShareInvitationToken * _invitationToken;
    CKUserIdentityLookupInfo * _lookupInfo;
    NSString * _participantHandle;
}

@property (nonatomic, retain) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic, retain) CKUserIdentityLookupInfo *lookupInfo;
@property (nonatomic, copy) NSString *participantHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (id)invitationToken;
- (id)invitationTokenData;
- (bool)isEqual:(id)arg1;
- (id)lookupInfo;
- (id)lookupInfoData;
- (id)participantHandle;
- (void)setInvitationToken:(id)arg1;
- (void)setLookupInfo:(id)arg1;
- (void)setParticipantHandle:(id)arg1;

@end
