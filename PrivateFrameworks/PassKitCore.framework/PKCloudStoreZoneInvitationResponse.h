
@interface PKCloudStoreZoneInvitationResponse : NSObject <NSSecureCoding> {
    PKSharingDestination * _destination;
    PKCloudStoreZoneInvitation * _invitation;
    long long  _status;
}

@property (nonatomic, retain) PKSharingDestination *destination;
@property (nonatomic, retain) PKCloudStoreZoneInvitation *invitation;
@property (nonatomic) long long status;

+ (id)cloudStoreZoneInvitationResponseWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)invitation;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (void)setDestination:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
