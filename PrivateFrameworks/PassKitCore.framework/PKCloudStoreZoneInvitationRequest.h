
@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding> {
    PKSharingDestination * _destination;
    PKCloudStoreZoneInvitation * _invitation;
    NSError * _invitationError;
}

@property (nonatomic, retain) PKSharingDestination *destination;
@property (nonatomic, retain) PKCloudStoreZoneInvitation *invitation;
@property (nonatomic, copy) NSError *invitationError;

+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)arg1;
+ (id)invitationErrorWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)invitation;
- (id)invitationError;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (void)setDestination:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInvitationError:(id)arg1;

@end
